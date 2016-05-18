/* Daniel Ramirez 	SSID: 861128926 */

%{
	#include "y.tab.h"
	#include "string.h"
	int currentLine = 1;
	int currentPosition = 0;
	extern int numToken;
	extern char* identToken;
%}

LETTER			[a-zA-Z]
DIGIT			[0-9]
WHITESPACE		[ \t]
IDENTIFIER		{LETTER}+(_?({LETTER}|{DIGIT})+)*

%%


"program" 		{currentPosition += yyleng; return PROGRAM;}
"beginprogram"		{currentPosition += yyleng; return BEGIN_PROGRAM;}
"endprogram"		{currentPosition += yyleng; return END_PROGRAM;}
"integer" 		{currentPosition += yyleng; return INTEGER;}
"array"			{currentPosition += yyleng; return ARRAY;}
"of"			{currentPosition += yyleng; return OF;}
"if" 			{currentPosition += yyleng; return IF;}
"then"		 	{currentPosition += yyleng; return THEN;}
"endif"		 	{currentPosition += yyleng; return ENDIF;}
"else" 			{currentPosition += yyleng; return ELSE;}
"while" 		{currentPosition += yyleng; return WHILE;}
"do" 			{currentPosition += yyleng; return DO;}
"beginloop"	 	{currentPosition += yyleng; return BEGINLOOP;}
"endloop" 		{currentPosition += yyleng; return ENDLOOP;}
"continue"	 	{currentPosition += yyleng; return CONTINUE;}
"read"		 	{currentPosition += yyleng; return READ;}
"write"		 	{currentPosition += yyleng; return WRITE;}
"and"			{currentPosition += yyleng; return AND;}
"or"			{currentPosition += yyleng; return OR;}
"not"			{currentPosition += yyleng; return NOT;}
"true"		 	{currentPosition += yyleng; return TRUE;}
"false"		 	{currentPosition += yyleng; return FALSE;}

"-"			{currentPosition += yyleng; return SUB;}
"+"			{currentPosition += yyleng; return ADD;} 
"*"			{currentPosition += yyleng; return MULT;}
"/"			{currentPosition += yyleng; return DIV;}
"%"			{currentPosition += yyleng; return MOD;}

"=="			{currentPosition += yyleng; return EQ;}
"<>"			{currentPosition += yyleng; return NEQ;}
"<"			{currentPosition += yyleng; return LT;}
">"			{currentPosition += yyleng; return GT;}
"<="			{currentPosition += yyleng; return LTE;}
">="			{currentPosition += yyleng; return GTE;}


{IDENTIFIER}+		{currentPosition += yyleng; yylval.sval = (char*) malloc(1 + strlen(yytext)); strcpy(yylval.sval, yytext); return IDENT;}
{DIGIT}+		{currentPosition += yyleng; yylval.dval = atoi(yytext); return NUMBER;}

";"			{currentPosition += yyleng; return SEMICOLON;}
":"			{currentPosition += yyleng; return COLON;}
","			{currentPosition += yyleng; return COMMA;}
"("			{currentPosition += yyleng; return L_PAREN;}
")"			{currentPosition += yyleng; return R_PAREN;}
":="			{currentPosition += yyleng; return ASSIGN;}

"##".*			{currentPosition += yyleng;}
{WHITESPACE}+		{currentPosition += yyleng;}

"\n"			{currentLine += 1; currentPosition = 0;}

({DIGIT}+|"_"+)({DIGIT}|"_"|{LETTER})+	{printf("ERROR at line %d, column %d: identifier \"%s\" must begin with a letter.\n", currentLine, currentPosition, yytext); exit(0);}
{IDENTIFIER}_+				{printf("ERROR at line %d, column %d: identifier \"%s\" cannot end with an underscore.\n", currentLine, currentPosition, yytext); exit(0);}
.					{printf("ERROR at line %d, column %d: unrecognized symbol \"%s\"\n", currentLine, currentPosition, yytext); exit(0);}

%%

/*
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
	
	return 0;
}*/
