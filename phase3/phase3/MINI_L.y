/* Daniel Ramirez 	SSID: 861128926 */
%{
	#include "y.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include <iostream>
	#include <sstream>
	#include <utility>
	#include "MINI_L.h"
	#include <fstream>
	void yyerror(const char *msg);
	extern int currentLine;
	extern int currentPosition;
	extern int yylex();
	extern FILE *yyin;
	int numToken;
	string programName;

	int labelId = 0;

	list<string> variables;	
	list<string> declaration_list;
	list<string> temp_t_vars;
	list<string> temp_p_vars;
	list<string> labels;
	list<pair<string, bool> > whileLabels;

	bool error_found = false;

	stringstream pgout;	//program output
%}

%union{char* sval; int dval;}

%error-verbose
%start start

%token PROGRAM BEGIN_PROGRAM END_PROGRAM 
%token <sval> INTEGER ARRAY
%token <sval> OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token <sval> AND OR NOT TRUE FALSE
%token SUB ADD MULT DIV MOD
%token <sval> EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN ASSIGN
%token <sval>IDENT 
%token <dval>NUMBER

%type <sval> identifier
%type <sval> array
%type <sval> array_block
%type <dval> number
%type <sval> exp
%type <sval> var
%type <sval> term2
%type <sval> mult_exp
%type <sval> add_exp
%type <sval> sub_exp
%type <sval> term
%type <sval> mult_exp2
%type <sval> div_exp
%type <sval> mod_exp
%type <sval> bool_exp
%type <sval> relation_and_exp
%type <sval> or_exp
%type <sval> and_exp
%type <sval> relation_exp
%type <sval> relation_exp2
%type <sval> not_exp
%type <sval> comp
%type <sval> not
%type <sval> equal
%type <sval> less_than
%type <sval> greater_than
%type <sval> less_than_eq
%type <sval> greater_than_eq
%type <sval> not_equal
%type <sval> if_else
%type <sval> vars
%type <sval> vars2


%left ADD SUB 
%left MULT DIV MOD
%left EQ NEQ LT GT LTE GTE

%%

start:		program identifier
		{
			programName = $2;
			programName = "_" + programName;
		} 
		semicolon block endprogram
		| 
		;


block:		declarations beginprogram statements
		;

declarations:	declaration semicolon declarations2
		;	

declarations2:	declarations			
		|
		;

declaration:	identifier declaration2 colon array_block integer
		{
			string tmp = string($4);
			string id = string($1);
			declaration_list.push_back("_" + id); 
			stringstream ss;

			list<string>::iterator it;
			
			Type var_type;
			int size = 0;

			for(it = declaration_list.begin(); it != declaration_list.end(); it++){
				ss.clear();
				ss.str(string());

				if(*it == programName){
					error_found = true;
					cout << "Error line "<< currentLine <<": Cannot declare variable with the same name as the program." << endl;
				}

				if(!is_declared(*it)){
					ss << "\t.";

					if(!tmp.empty()){
						ss << "[] " << *it << ", " << tmp; 
						var_type = ARRAY_T;
						size = atoi(tmp.c_str());

						if(size == 0){
							cout << "Error line " << currentLine << ". Invalid array size." << endl;
							error_found = true;
						} 
					}
					else{
						ss << " " << *it; 
						var_type = INT_T;
						size = 0;
					}		

					variables.push_back(ss.str());
					Symbol sym(*it, var_type, size);
					symbol_table[*it] = sym;
				}
				else{
					cout << "Error line " << currentLine << ": " << *it << " already declared." << endl;
				}
			}

			declaration_list.clear();
			
		}
		;

declaration2:	comma identifier declaration2			
		{
			string id = "_" + string($2); 
			declaration_list.push_back(id);
		}
		|					
		;

array_block:	array l_paren neg_array number r_paren of
		{
			stringstream ss;
			ss << $4;
			$$ = (char*) ss.str().c_str();
			ss.str(string());
		}	
		|
		{
			$$ = "";
		}	
		;

neg_array:	sub
		{
			cout << "Error line " << currentLine << ": Invalid array size." << endl;
			error_found = true;
		}
		|
		;

statements:	statement semicolon statements2	
		;

statements2:	statements		
		|		
		;

if_else:	Else
		{
			$$ = "else";
			string label1 = labels.back();
			labels.pop_back();

			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			
			string label2 = ss.str();
			labels.push_back(label2);

			pgout << "\t:= " << label2 << endl;

			pgout << ": " << label1 << endl;
			
		} 
		statements
		{
			$$ = "else";
		}
		|	
		{
			if(!labels.empty()){
				string label = labels.back();
				labels.pop_back();

				pgout << ": " << label << endl;
			}
			
			$$ = NULL;
		}
		; 

statement:	var assign exp
		{
			string temp;
			string var = $1;
			string exp = $3;
			string index;

			bool indexIsVar = false;
			bool varIsArr = false;
			bool expIsArr = false;

			if((temp = var).find(",") != string::npos || (temp = exp).find(",") != string::npos){
				varIsArr = temp == var;
				expIsArr = !varIsArr;

				var = temp.substr(0, temp.find(","));
				index = temp.substr(temp.find(" ") + 1);

				indexIsVar = !is_temp(index) && !(atoi(index.c_str()));
			}
			
			map<string, Symbol>::iterator it = symbol_table.find(var);


			if(indexIsVar && (it = symbol_table.find(index)) == symbol_table.end()){
				error_found = true;
				cout << "Error line " << currentLine << ": " << index << " has not been declared and is used as an index.\n" << endl;
			}

			if(varIsArr){
				string third = evaluate_array($3);
				pgout << "\t[]= " << var << ", " << index << ", " << third << endl;
			}
			else if(expIsArr){
				pgout << "\t=[] " << $1 << ", " << exp << endl;
			}
			else{
				pgout << "\t= " << $1 << ", " << $3 << endl;
			}
				
		}					
		| If bool_exp then 
		{
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);

			string pred = bool_statement("!", $2, " ");

			pgout << endl << "\t?:= " << label << ", " << pred << endl;
		} 
		statements if_else endif
		{
			if($6 != NULL){
				string label = labels.back();

				pgout << ": " << label << endl;

				labels.pop_back();
			}
		}
		| While
		{
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);
			whileLabels.push_back(make_pair(label, false));

			pgout <<  endl << ": " << label << endl;
		}
		bool_exp
		{
			stringstream ss;
			ss << "L" << labelId;
			labelId++;
			string label = ss.str();
			labels.push_back(label);

			string pred = bool_statement("!", $3, " ");

			pgout << "\t?:= " << label << ", " << pred << endl;	
		}
		beginloop statements endloop
		{
			string breakLabel = labels.back();
			labels.pop_back();
			
			string nextItLabel = labels.back();
			labels.pop_back();

			pgout << "\t:= " << nextItLabel << endl;
		
			pgout << ": " << breakLabel << endl;

			whileLabels.pop_back();
		}
		| Do beginloop 
		{
			stringstream ss;
			ss << "L" << labelId;
			labelId++;

			string label = ss.str();
			labels.push_back(label);

			pgout << ": " << label << endl;

			whileLabels.push_back(make_pair("L", false));
		}
		statements endloop While
		{
			pair<string, bool> labelPair = whileLabels.back();

			if(labelPair.second){
				pgout << ": " << labelPair.first << endl;
			}

			whileLabels.pop_back();
		}
		bool_exp
		{
			string label = labels.back();
			labels.pop_back();
	
			pgout << "\t?:= " << label << ", " << $8 << endl;

		}
		| read vars
		{
			char *copy = strdup($2);
			vector<string> all = split(copy, '-');

			for(int i = 0; i < all.size(); i++){
				pgout << "\t.";
				if(all.at(i).find(',') != string::npos){
					pgout << "[]";
				}
				pgout << "< " << all.at(i) << endl;
			}			

		}				
		| write vars 			
		{
			char *copy = strdup($2);
			vector<string> all = split(copy, '-');

			for(int i = 0; i < all.size(); i++){
				pgout << "\t.";
				if(all.at(i).find(',') != string::npos){
					pgout << "[]";
				}
				pgout << "> " << all.at(i) << endl;
			}
		}
		| Continue
		{
			if(whileLabels.empty()){
				cout << "Error line " << currentLine << ": using keyword \"continue\" outside of a while or do-while loop." << endl;
			}
			else{
				pair<string, bool> labelPair = whileLabels.back();
				labelPair.second = true;

				if(labelPair.first == "L"){
					stringstream ss;
					ss << labelPair.first << labelId;
					labelId++;
					labelPair.first = ss.str();
				}

				pgout << "\t:= " << labelPair.first << endl;

				whileLabels.back() = labelPair;
			}
		}		
		;


bool_exp:	relation_and_exp or_exp	
		{
			string temp = $1;

			if($2 != NULL){
				temp = bool_statement("||", temp, $2);
			}
			
			$$ = strdup(temp.c_str());
		}
		;

or_exp:		or bool_exp	
		{
			$$ = $2;
		}
		|
		{
			$$ = NULL;
		}
		; 

relation_and_exp: relation_exp and_exp
		{	
			string temp = $1;

			if($2 != NULL){
				temp = bool_statement("&&", temp, $2);			
			}
		
			$$ = strdup(temp.c_str());
		}
		;

and_exp:	and relation_and_exp
		{
			$$ = $2;
		}
		|
		{
			$$ = NULL;
		}		
		;

relation_exp:	not_exp relation_exp2
		{
			string temp = $2;

			if($1 != NULL){
				temp = bool_statement("!", temp, " ");
			}
			$$ = strdup(temp.c_str());
		}
		;

relation_exp2:	exp comp exp	
		{
			string comp = $2;

			string temp = bool_statement($2, $1, $3);

			$$ = strdup(temp.c_str());
		}
		| True	
		{
			$$ = "1";
		}
		| False
		{
			$$ = "0";
		}
		| l_paren bool_exp r_paren
		{
			$$ = $2;
		}
		;

not_exp:	not
		{
			$$ = $1;
		}		
		|
		{
			$$ = NULL;
		}		
		;


comp:		equal	
		{
			$$ = "==";
		}
		| not_equal
		{
			$$ = "!=";
		}
		| less_than
		{
			$$ = "<";
		}
		| greater_than
		{
			$$ = ">";
		}
		| less_than_eq
		{
			$$ = "<=";
		}
		| greater_than_eq
		{
			$$ = ">=";
		}
		;	

exp:		mult_exp add_exp sub_exp
		{
			string temp = $1;
			bool tempCreated = false; 

			if($2 != NULL){
				tempCreated = true;
				temp = arith_statement("+", temp, $2);
			}	

			if($3 != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("-", temp, $3);
				}
				else{				
					temp = arith_statement("-", temp, $3, temp);
				}
			}
	
			$$ = strdup(temp.c_str());
		}
		;

add_exp:	add exp
		{
			$$ = $2;
		}		
		|
		{
			$$ = NULL;
		}	
		;

sub_exp:	sub exp
		{
			$$ = $2;
		}	
		|
		{
			$$ = NULL;
		}
		;

mult_exp:	term mult_exp2 div_exp mod_exp
		{
			char *mod;
			if($4 != NULL){
				mod = strdup($4);
			}

			char *div;
			if($3 != NULL){
				div = strdup($3);
			}	


			bool tempCreated = false;

			string temp = $1;			

			if($2 != NULL){
				tempCreated = true;
				temp = arith_statement("*", temp, $2);
			}

			if($3 != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("/", temp, div);
				}
				else{
					temp = arith_statement("/", temp, div, temp);
				}
			}

			if($4 != NULL){
				if(!tempCreated){
					tempCreated = true;
					temp = arith_statement("%", temp, mod);
				}
				else{
					temp = arith_statement("%", temp, mod, temp);
				}
			}

			$$ = strdup(temp.c_str());
		}	
		;

mult_exp2:	mult mult_exp
		{
			$$ = $2;
		}		
		|
		{
			$$ = NULL;
		}		
		;

div_exp:	div mult_exp
		{		
			$$ = $2;
		}
		| 	
		{
			$$ = NULL;
		}
		;


mod_exp:	mod mult_exp
		{
			$$ = $2;
		}
		|
		{
			$$ = NULL;
		}	
		;

term:		sub_exp term2
		{
			$$ = $2;
		}
		;	

term2:		var
		{
			$$ = $1;
		}	
		| number
		{
			stringstream ss;
			ss << $1;
			$$ = strdup(ss.str().c_str());
			ss.str(string());
		}
		| l_paren exp r_paren
		{
			$$ = $2;
		}
		;


vars:		var vars2	
		{
			stringstream ss;
			ss << $1;
			
			if($2 != NULL){
				ss << "-" << $2;
			}

			$$ = strdup(ss.str().c_str());
		}
		;

vars2:		comma vars
		{
			$$ = strdup($2);
		}
		|	
		{
			$$ = NULL;
		}
		;


var:		identifier
		{
			string id = "_" + string($1); 
			if(!is_declared(id)){
				error_found = true;
				cout << "Error line " << currentLine << ": " << $1 << " was not declared." << endl;
			}
			else{
				Symbol sym = symbol_table[id];
		
				if(sym.type == ARRAY_T){
					cout << "Error line " << currentLine << ": attempting to use array \"" << id.substr(1) << "\" without an index." << endl;
				}				
			}

			$$ = strdup(id.c_str()); 
		}
		| identifier l_paren neg_array exp r_paren
		{
			string id = "_" + string($1); 
			if(!is_declared(id)){
				cout << "Error line " << currentLine <<  ": " << $1 << " was not declared." << endl;
				error_found = true;
			}
			else{
				Symbol sym = symbol_table[id];

				if(sym.type == INT_T){
					cout << "Error line " << currentLine << ": attempting to use integer variable \"" << id.substr(1) << "\" as an array." << endl;
				}
			}

			if(!is_temp($4)){
				is_declared($4);
			}

			stringstream ss;
			ss << id << ", " << $4;
			$$ = strdup(ss.str().c_str());
			ss.str(string());
		}
		;




program:	PROGRAM				
		;
beginprogram:	BEGIN_PROGRAM
		{	
			pgout << ": START" << endl;
		}
		;
identifier:	IDENT			
		;
colon:		COLON		
		;
comma:		COMMA	
		;
semicolon:	SEMICOLON
		;
endprogram:	END_PROGRAM
		;
array:		ARRAY
		;
l_paren:	L_PAREN	
		;
number:		NUMBER
		;
r_paren:	R_PAREN	
		;
of:		OF
		;
If:		IF
		;
then:		THEN
		;
endif:		ENDIF
		;
Else:		ELSE
		;
While:		WHILE
		;
Do:		DO	
		;
beginloop:	BEGINLOOP
		;
endloop:	ENDLOOP	
		;
read:		READ
		;
write:		WRITE
		;
Continue:	CONTINUE
		;
and:		AND
		;
or:		OR	
		;
not:		NOT
		;
True:		TRUE
		;
False:		FALSE
		;
equal:		EQ
		;
not_equal:	NEQ
		;
less_than:	LT
		;
greater_than:	GT
		;
less_than_eq:	LTE
		;
greater_than_eq: GTE
		;
add:		ADD
		;
sub:		SUB
		;
mult:		MULT
		;
div:		DIV	
		;
mod:		MOD
		;
integer:	INTEGER
		;
assign:		ASSIGN	
		;

%%

bool is_declared(string id){
	return symbol_table.find(id) != symbol_table.end();
}

bool is_temp(string temp){
	list<string>::iterator it;
	if(temp.at(0) == 't'){
		for(it = temp_t_vars.begin(); it != temp_t_vars.end(); it++){
			if(*it == temp){
				return true;	
			}
		}
	}
	else if(temp.at(0) == 'p'){
		for(it = temp_p_vars.begin(); it != temp_p_vars.end(); it++){
			if(*it == temp){
				return true;
			}
		}
	}

	return false;
}

void mil_output(){

	if(error_found){
		return;
	}

	string pname = programName.substr(1) + ".mil";
	ofstream fout (pname.c_str());

	list<string>::iterator it;

	for(it = variables.begin(); it != variables.end(); it++){
		fout << *it << endl;
	}


	for(it = temp_t_vars.begin(); it != temp_t_vars.end(); it++){
		fout << "\t. " << *it << endl;
	}

	for(it = temp_p_vars.begin(); it != temp_p_vars.end(); it++){
		fout << "\t. " << *it << endl;
	}

	
	fout << pgout.str() << endl;
}

string evaluate_array(string src){
	
	string dst = src;

	if(src.find(',') != string::npos){

		stringstream ss;
		dst = "t";
		temp_t_vars.push_back(dst);
		int size = temp_t_vars.size();
		ss << dst << (size - 1);
		temp_t_vars.back() = ss.str();
		dst = temp_t_vars.back();

		pgout << "\t=[] " << dst << ", " << src << endl;
	}

	return dst;
}

string arith_statement(string op, string src1, string src2, string dst){

	src1 = evaluate_array(src1);
	src2 = evaluate_array(src2);
	
	if(dst == "t"){
		temp_t_vars.push_back(dst);
		int size = temp_t_vars.size();

		stringstream ss;
		ss << dst << (size - 1);
		temp_t_vars.back() = ss.str();
		ss.str(string());

		dst = temp_t_vars.back();
	}

	pgout << "\t" << op << " " << dst << ", " << src1 << ", " << src2 << endl;

	return dst;
}

string bool_statement(string op, string src1, string src2, string dst){
	
	src1 = evaluate_array(src1);
	src2 = evaluate_array(src2);

	if(dst == "p"){
		temp_p_vars.push_back(dst);
		int size = temp_p_vars.size();
	
		stringstream ss;
		ss << dst << (size - 1);
		temp_p_vars.back() = ss.str();
		ss.str(string());

		dst = temp_p_vars.back();
	}

	if(op != "!"){
		pgout << "\t" << op << " " << dst << ", " << src1 << ", " << src2 << endl;
	}
	else{
		pgout << "\t" << op << " " << dst << ", " << src1 << endl;	
	}

	return dst;
}

vector<string> split(const char *str, char c){
	vector<string> result;

	do{
	
		const char *begin = str;

		while(*str != c && *str)
			str++;

		result.push_back(string(begin, str));

	}while (0 != *str++);

	return result;
}

int main(int argc, char **argv){
	
	if(argc > 1){
		yyin = fopen(argv[1], "r");
		
		if(yyin == NULL){
			yyin = stdin;
		}
	}
	else{
		yyin = stdin;
	}

	yyparse();

	mil_output();	

	return 0;
}

void yyerror(const char *msg){
	printf("\n\n** Line %d, position %d: %s\n", currentLine, currentPosition, msg);
	error_found = true;
}
