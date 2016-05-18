/* Daniel Ramirez 	SSID: 861128926 */
%{
	#include "y.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
	void yyerror(const char *msg);
	extern int currentLine;
	extern int currentPosition;
	int prodId = 0;
	FILE *yyin;
	int numToken;
	char* identToken;
%}


%error-verbose
%start start

%token PROGRAM BEGIN_PROGRAM END_PROGRAM 
%token INTEGER ARRAY
%token OF IF THEN ENDIF ELSE WHILE DO BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token AND OR NOT TRUE FALSE
%token SUB ADD MULT DIV MOD
%token EQ NEQ LT GT LTE GTE
%token SEMICOLON COLON COMMA L_PAREN R_PAREN ASSIGN
%token IDENT 
%token NUMBER

%left ADD SUB 
%left MULT DIV MOD
%left EQ NEQ LT GT LTE GTE

%%

start:		program identifier semicolon block endprogram		{prodId++; $$=prodId; printf("%d: start -> program#%d identifier#%d semicolon#%d block#%d endprogram#%d\n", prodId, $1, $2, $3, $4, $5);}
		|							{prodId++; $$=prodId; printf("%d: start -> \n", prodId);}
		;


block:		declarations beginprogram statements			{prodId++; $$=prodId; printf("%d: block -> declarations#%d beginprogram#%d statements#%d\n", prodId, $1, $2, $3);}
		;

declarations:	declaration semicolon declarations2			{prodId++; $$=prodId; printf("%d: declarations -> declaration#%d semicolon#%d declarations2#%d\n", prodId, $1, $2, $3);}
		;	

declarations2:	declarations						{prodId++; $$=prodId; printf("%d: declarations2 -> declarations#%d\n", prodId, $1);}
		| 							{prodId++; $$=prodId; printf("%d: declarations2 -> \n", prodId);}
		;

declaration:	identifier declaration2 colon array_block integer	{prodId++; $$=prodId; printf("%d: declaration -> identifier#%d declaration2#%d colon#%d array#%d integer#%d\n", prodId, $1, $2, $3, $4, $5);}
		;

declaration2:	comma identifier declaration2				{prodId++; $$=prodId; printf("%d: declaration2 -> comma#%d identifier#%d declaration2#%d\n", prodId, $1, $2, $3);}
		|							{prodId++; $$=prodId; printf("%d: declaration2 -> \n", prodId);}
		;

array_block:	array l_paren number r_paren of				{prodId++; $$=prodId; printf("%d: array_block -> array#%d l_paren#%d number#%d r_paren#%d of#%d\n", prodId, $1, $2, $3, $4, $5);}		
		|							{prodId++; $$=prodId; printf("%d: array_block -> \n", prodId);}
		;

statements:	statement semicolon statements2				{prodId++; $$=prodId; printf("%d: statements -> statement#%d semicolon#%d statements2#%d\n", prodId, $1, $2, $3);}
		;

statements2:	statements						{prodId++; $$=prodId; printf("%d: statements2 -> statements#%d \n", prodId, $1);}
		|							{prodId++; $$=prodId; printf("%d: statements2 -> \n", prodId);}
		;

if_else:	Else statements 					{prodId++; $$=prodId; printf("%d: if_else -> Else#%d statements#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: if_else -> \n", prodId);}
		; 

statement:	var assign exp						{prodId++; $$=prodId; printf("%d: statement -> var#%d assign#%d exp#%d\n", prodId, $1, $2, $3);}
		| If bool_exp then statements if_else endif 		{prodId++; $$=prodId; printf("%d: statement -> If#%d bool_exp#%d then#%d statements#%d if_else#%d endif#%d\n", prodId, $1, $2, $3, $4, $5, $6 );}
		| While bool_exp beginloop statements endloop		{prodId++; $$=prodId; printf("%d: statement -> While#%d bool_exp#%d beginloop#%d statements#%d endloop#%d\n", prodId, $1, $2, $3, $4, $5);}
		| Do beginloop statements endloop While bool_exp	{prodId++; $$=prodId; printf("%d: statement -> Do#%d beginloop#%d statements#%d endloop#%d While#%d bool_exp#%d\n", prodId, $1, $2, $3, $4, $5, $6);}
		| read vars 						{prodId++; $$=prodId; printf("%d: statement -> vars#%d\n", prodId, $1);}
		| write vars 						{prodId++; $$=prodId; printf("%d: statement -> vars#%d\n", prodId, $1);}
		| Continue						{prodId++; $$=prodId; printf("%d: statement -> Continue#%d\n", prodId, $1);}
		;


bool_exp:	relation_and_exp or_exp					{prodId++; $$=prodId; printf("%d: bool_exp -> relation_and_exp#%d or_exp#%d\n", prodId, $1, $2);}
		;

or_exp:		or bool_exp						{prodId++; $$=prodId; printf("%d: or_exp -> or#%d bool_exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: or_exp -> \n", prodId);}
		; 

relation_and_exp: relation_exp and_exp					{prodId++; $$=prodId; printf("%d: relation_and_exp -> relation_exp#%d and_exp#%d\n", prodId, $1, $2);}
		  ;

and_exp:	and relation_and_exp					{prodId++; $$=prodId; printf("%d: and_exp -> and#%d relation_and_exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: and_exp -> \n", prodId);} 
		;

relation_exp:	not_exp relation_exp2					{prodId++; $$=prodId; printf("%d: relation_exp -> not_exp#%d relation_exp#%d\n", prodId, $1, $2);}
		;

relation_exp2:	exp comp exp						{prodId++; $$=prodId; printf("%d: relation_exp -> exp#%d comp#%d exp#%d\n", prodId, $1, $2, $3);}
		| True							{prodId++; $$=prodId; printf("%d: relation_exp -> True#%d\n", prodId, $1);}
		| False							{prodId++; $$=prodId; printf("%d: relation_exp -> False#%d\n", prodId, $1);}
		| l_paren bool_exp r_paren				{prodId++; $$=prodId; printf("%d: relation_exp -> l_paren#%d bool_exp#%d r_paren#%d\n", prodId, $1, $2, $3);}
		;

not_exp:	not							{prodId++; $$=prodId; printf("%d: not_exp -> not#%d\n", prodId, $1);}
		|							{prodId++; $$=prodId; printf("%d: not_exp -> \n", prodId);}
		;


comp:		equal							{prodId++; $$=prodId; printf("%d: comp -> equal#%d\n", prodId, $1);}
		| not_equal						{prodId++; $$=prodId; printf("%d: comp -> not_equal#%d\n", prodId, $1);}
		| less_than						{prodId++; $$=prodId; printf("%d: comp -> less_than#%d\n", prodId, $1);}
		| greater_than						{prodId++; $$=prodId; printf("%d: comp -> greater_than#%d\n", prodId, $1);}
		| less_than_eq						{prodId++; $$=prodId; printf("%d: comp -> less_than_eq#%d\n", prodId, $1);}
		| greater_than_eq					{prodId++; $$=prodId; printf("%d: comp -> greater_than_eq#%d\n", prodId, $1);}
		;	

exp:		mult_exp add_exp sub_exp				{prodId++; $$=prodId; printf("%d: exp -> mult_exp#%d add_exp#%d sub_exp#%d\n", prodId, $1, $2, $3);}
		;

add_exp:	add exp							{prodId++; $$=prodId; printf("%d: add_exp -> add#%d exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: add_exp -> \n", prodId);}
		;

sub_exp:	sub exp							{prodId++; $$=prodId; printf("%d: sub_exp -> sub#%d exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: sub_exp -> \n", prodId);}
		;

mult_exp:	term mult_exp2 div_exp mod_exp				{prodId++; $$=prodId; printf("%d: mult_exp -> term#%d mult_exp2#%d div_exp#%d mod_exp#%d\n", prodId, $1, $2, $3, $4);}
		;

mult_exp2:	mult mult_exp						{prodId++; $$=prodId; printf("%d: mult_exp2 -> mult#%d mult_exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: mult_exp2 -> \n", prodId);}
		;

div_exp:	div mult_exp						{prodId++; $$=prodId; printf("%d: div_exp -> div#%d mult_exp#%d\n", prodId, $1, $2);}
		| 							{prodId++; $$=prodId; printf("%d: div_exp -> \n", prodId);}
		;

mod_exp:	mod mult_exp						{prodId++; $$=prodId; printf("%d: mod_exp -> mod#%d mult_exp#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: mod_exp -> \n", prodId);}
		;

term:		sub_exp term2						{prodId++; $$=prodId; printf("%d: term -> sub_exp#%d term2#%d\n", prodId, $1, $2);}
		;	

term2:		var							{prodId++; $$=prodId; printf("%d: term2 -> var#%d\n", prodId, $1);}
		| number						{prodId++; $$=prodId; printf("%d: term2 -> number#%d\n", prodId, $1);}
		| l_paren exp r_paren					{prodId++; $$=prodId; printf("%d: term2 -> l_paren#%d exp#%d r_paren#%d\n", prodId, $1, $2, $3);}
		;


vars:		var vars2						{prodId++; $$=prodId; printf("%d: vars -> var#%d vars2#%d\n", prodId, $1, $2);}
		;

vars2:		comma vars						{prodId++; $$=prodId; printf("%d: vars2 -> comma#%d vars#%d\n", prodId, $1, $2);}
		|							{prodId++; $$=prodId; printf("%d: vars2 -> \n", prodId);}
		;


var:		identifier						{prodId++; $$=prodId; printf("%d: var -> identifier#%d\n", prodId, $1);}
		| identifier l_paren exp r_paren			{prodId++; $$=prodId; printf("%d: var -> identifier#%d l_paren#%d exp#%d r_paren#%d\n", prodId, $1, $2, $3, $4);}
		;




program:	PROGRAM							{prodId++; $$=prodId; printf("%d: program -> PROGRAM#%d\n", prodId, $1);}
		;
beginprogram:	BEGIN_PROGRAM 						{prodId++; $$=prodId; printf("%d: begin_program -> BEGIN_PROGRAM#%d\n", prodId, $1);}
		;
identifier:	 IDENT							{prodId++; $$=prodId; printf("%d: ident -> IDENT (%s)#%d\n", prodId, identToken, $1);}
		;
colon:		COLON							{prodId++; $$=prodId; printf("%d: colon -> COLON#%d\n", prodId, $1);}
		;
comma:		COMMA							{prodId++; $$=prodId; printf("%d: comma -> COMMA#%d\n", prodId, $1);}
		;
semicolon:	SEMICOLON						{prodId++; $$=prodId; printf("%d: semicolon -> SEMICOLON#%d\n", prodId, $1);}
		;
endprogram:	END_PROGRAM						{prodId++; $$=prodId; printf("%d: end_program -> END_PROGRAM#%d\n", prodId, $1);}
		;
array:		ARRAY							{prodId++; $$=prodId; printf("%d: array -> ARRAY#%d\n", prodId, $1);}
		;
l_paren:	L_PAREN							{prodId++; $$=prodId; printf("%d: l_paren -> L_PAREN#%d\n", prodId, $1);}
		;
number:		NUMBER							{prodId++; $$=prodId; printf("%d: number -> NUMBER (%d)#%d\n", prodId, numToken, $1);}
		;
r_paren:	R_PAREN							{prodId++; $$=prodId; printf("%d: r_paren -> R_PAREN#%d\n", prodId, $1);}
		;
of:		OF							{prodId++; $$=prodId; printf("%d: of -> OF#%d\n", prodId, $1);}
		;
If:		IF							{prodId++; $$=prodId; printf("%d: If -> IF#%d\n", prodId, $1);}
		;
then:		THEN							{prodId++; $$=prodId; printf("%d: then -> THEN#%d\n", prodId, $1);}
		;
endif:		ENDIF							{prodId++; $$=prodId; printf("%d: endif -> ENDIF#%d\n", prodId, $1);}
		;
Else:		ELSE							{prodId++; $$=prodId; printf("%d: Else -> ELSE#%d\n", prodId, $1);}
		;
While:		WHILE							{prodId++; $$=prodId; printf("%d: While -> WHILE#%d\n", prodId, $1);}
		;
Do:		DO							{prodId++; $$=prodId; printf("%d: Do -> DO#%d\n", prodId, $1);}
		;
beginloop:	BEGINLOOP						{prodId++; $$=prodId; printf("%d: beginloop -> BEGINLOOP#%d\n", prodId, $1);}
		;
endloop:	ENDLOOP							{prodId++; $$=prodId; printf("%d: endloop -> ENDLOOP#%d\n", prodId, $1);}
		;
read:		READ							{prodId++; $$=prodId; printf("%d: read -> READ#%d\n", prodId, $1);}
		;
write:		WRITE							{prodId++; $$=prodId; printf("%d: write -> WRITE#%d\n", prodId, $1);}
		;
Continue:	CONTINUE						{prodId++; $$=prodId; printf("%d: Continue -> CONTINUE#%d\n", prodId, $1);}
		;
and:		AND							{prodId++; $$=prodId; printf("%d: and -> AND#%d\n", prodId, $1);}
		;
or:		OR							{prodId++; $$=prodId; printf("%d: or -> OR#%d\n", prodId, $1);}
		;
not:		NOT							{prodId++; $$=prodId; printf("%d: not -> NOT#%d\n", prodId, $1);}
		;
True:		TRUE							{prodId++; $$=prodId; printf("%d: True -> TRUE#%d\n", prodId, $1);}
		;
False:		FALSE							{prodId++; $$=prodId; printf("%d: False -> FALSE#%d\n", prodId, $1);}
		;
equal:		EQ							{prodId++; $$=prodId; printf("%d: equal -> EQ#%d\n", prodId, $1);}
		;
not_equal:	NEQ							{prodId++; $$=prodId; printf("%d: not_equal -> NEQ#%d\n", prodId, $1);}
		;
less_than:	LT							{prodId++; $$=prodId; printf("%d: less_than -> LT#%d\n", prodId, $1);}
		;
greater_than:	GT							{prodId++; $$=prodId; printf("%d: greater_than -> GT#%d\n", prodId, $1);}
		;
less_than_eq:	LTE							{prodId++; $$=prodId; printf("%d: less_than_eq -> LTE#%d\n", prodId, $1);}
		;
greater_than_eq: GTE							{prodId++; $$=prodId; printf("%d: greater_than_eq -> GTE#%d\n", prodId, $1);}
		;
add:		ADD							{prodId++; $$=prodId; printf("%d: add -> ADD#%d\n", prodId, $1);}
		;
sub:		SUB							{prodId++; $$=prodId; printf("%d: sub -> SUB#%d\n", prodId, $1);}
		;
mult:		MULT							{prodId++; $$=prodId; printf("%d: mult -> MULT#%d\n", prodId, $1);}
		;
div:		DIV							{prodId++; $$=prodId; printf("%d: div -> DIV#%d\n", prodId, $1);}
		;
mod:		MOD							{prodId++; $$=prodId; printf("%d: mod -> MOD#%d\n", prodId, $1);}
		;
integer:	INTEGER							{prodId++; $$=prodId; printf("%d: integer -> INTEGER#%d\n", prodId, $1);}
		;
assign:		ASSIGN							{prodId++; $$=prodId; printf("%d: assign -> ASSIGN#%d\n", prodId, $1);}
		;

%%

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

	return 0;
}

void yyerror(const char *msg){
	printf("\n\n** Line %d, position %d: %s\n", currentLine, currentPosition, msg);
}
