#ifndef __MINI_L_H__
#define __MINI_L_H__

#include <map>
#include <vector>
#include <list>

using namespace std;

enum Type { INT_T, ARRAY_T };
enum ArithType {ADD_T, SUB_T, MULT_T, DIV_T};
enum BoolType {AND_T, OR_T};

typedef struct Symbol{
	string name;
	Type type;
	int size;

	Symbol(string n, Type t, int s)
	:name(n), type(t), size(s){}

	Symbol(){}
} Symbol;

typedef struct TempT{
	string name;
	ArithType type;
	
	TempT(string n, ArithType t)
	: name(n), type(t){}

	TempT(){}
} TempT;

typedef struct TempP{
	string name;
	BoolType type;

	TempP(string n, BoolType t)
	: name(n), type(t){}

	TempP(){}
} TempP;

map<string, Symbol> symbol_table;

bool is_declared(string var); 
bool is_temp(string temp);
string arith_statement(string op, string src1, string src2, string dst = "t");
string bool_statement(string op, string src1, string src2, string dst = "p");
vector<string> split(const char *str, char c = ' ');
string evaluate_array(string src);

#endif
