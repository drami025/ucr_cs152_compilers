DIGIT	[0-9]

%%

"+"	{printf("Addition:%s\n", yytext);}
"-"	{printf("Subtraction:%s\n", yytext);}
"/"	{printf("Division:%s\n", yytext);}
"*"	{printf("Multiplication:%s\n", yytext);}
"="	{printf("Equals:%s\n", yytext);}

[\s\t]

{DIGIT}*\.{DIGIT}+|{DIGIT}+(\.{DIGIT}*)?([Ee][+-]?[0-9]+)?	{printf("Number:%s\n", yytext);}

.	{printf("Error. Character not recognized in lexical set:%s\n", yytext);}

%%

int main(int argc, char** argv){

	if(argc >= 2){
		yyin = fopen(argv[1], "r");

		if(yyin == NULL){
			yyin = stdin;
		}
	
	}
	else{
		yyin = stdin;
	}

	yylex();

}

