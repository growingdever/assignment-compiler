#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define NUMBER 256
#define PLUS 257
#define STAR 258
#define LPAREN 259
#define RPAREN 260
#define END 261
#define EXPRESSION 0
#define TERM 1
#define FACTOR 2
#define ACC 999


int action[12][6] = {
	{ 5, 0, 0, 4, 0, 0 },
	{ 0, 6, 0, 0, 0, ACC },
	{ 0, -2, 7, 0, -2, -2 },
	{ 0, -4, -4, 0, -4, -4 },
	{ 5, 0, 0, 4, 0, 0 },
	{ 0, -6, -6, 0, -6, -6 },
	{ 5, 0, 0, 4, 0, 0 },
	{ 5, 0, 0, 4, 0, 0 },
	{ 0, 6, 0, 0, 11, 0 },
	{ 0, -1, 7, 0, -1, -1 },
	{ 0, -3, -3, 0, -3, -3 },
	{ 0, -5, -5, 0, -5, -5 }
};

int go_to[12][3] = {
	{ 1, 2, 3 },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 8, 2, 3 },
	{ 0, 0, 0 },
	{ 0, 9, 3 },
	{ 0, 0, 10 },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 },
	{ 0, 0, 0 }
};

int prod_left[7] = { 0, EXPRESSION, EXPRESSION, TERM, TERM, FACTOR, FACTOR };
int prod_length[7] = { 0, 3, 1, 3, 1, 3, 1 };

int stack[10000];
int top = -1;
int sym;


void push(int);
void shift(int i);
void reduce(int);
void yyerror();

int yylex();
void lex_error();

void yyparse();


int main() {
	yyparse();
	return 0;
}

void yyparse() {
	int i;
	stack[++top] = 0;
	sym = yylex();

	do {
		i = action[stack[top]][sym-256];
		if (i == ACC) {
			printf("success!\n");
		} else if (i > 0) {
			shift(i);
		} else if (i < 0) {
			reduce(-i);
		} else {
			yyerror();
		}
	} while (i != ACC);
}

void push(int i) {
	top ++;
	stack[top] = i;
}

void shift(int i) {
	push(i);
	sym = yylex();
}

void reduce(int i) {
	int old_top;
	top -= prod_length[i];
	old_top = top;
	push(go_to[stack[old_top]][prod_left[i]]);
}

void yyerror() {
	printf("syntax error\n");
	exit(1);
}

int yylex() {
	static char ch = ' ';
	int i = 0;
	
	while (ch == ' ' || ch == '\t' || ch == '\n') {
		ch = getchar();
	}

	if (isdigit(ch)) {
		do {
			ch = getchar();
		} while (isdigit(ch));
		return NUMBER;
	} else if (ch == '+') {
		ch = getchar();
		return PLUS;
	} else if (ch == '*') {
		ch = getchar();
		return STAR;
	} else if (ch == '(') {
		ch = getchar();
		return LPAREN;
	} else if (ch == ')') {
		ch = getchar();
		return RPAREN;
	} else if (ch == EOF) {
		return END;
	} else {
		lex_error();
		return -1;
	}
}

void lex_error() {
	printf("illegal token\n");
	exit(1);
}