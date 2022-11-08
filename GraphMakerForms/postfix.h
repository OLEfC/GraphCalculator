#pragma once
#include <stack>
#include <string>
#include <iostream>
#include <math.h>
#include <vector>
#include <msclr\marshal_cppstd.h>
using namespace std;


bool isOperator(char x);
bool isOperand(char x);
bool isDushky(char x);
bool isFunction(string rivny, int i);
string* toPostfix(string* rivny);

string* parser(string input);
int getPriority(char C);
double calculator(string* output, double x,double h);
double whatoperator(char oper, double a, double b, double h);
double whatfun(string oper, double a,double h);
double ydh(string input, double x0, double  h);
double ydr(string input, double x0, double  h);



