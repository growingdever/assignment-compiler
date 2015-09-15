%{
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int yylex();
extern void yyerror(char *s);
%}
%start S
%token PLUS STAR LP RP NUMBER END

%%
S	: E			{ printf("E : %d\n", $1); }
	;
E	: E PLUS T 	{ $$ = $1 + $3; }
	| T 		{ $$ = $1; }
	;
T	: T STAR F 	{ $$ = $1 * $3; }
	| F 		{ $$ = $1; }
	;
F	: LP E RP 	{ $$ = $2; }
	| NUMBER 	{ $$ = $1; }
	;
%%

int main() {
	yyparse();
	return 0;
}

int lex_error() {
	printf("illegal token\n");
	exit(1);
	return 0;
}

void yyerror(char *s) {
	printf("%d %s\n", yynerrs, s);
	exit(1);
}

int yylex() {
	static char ch = ' ';

	while (ch == ' ' || ch == '\t' || ch == '\n') {
		ch = getchar();
	}

	if (isdigit(ch)) {
		do {
			yylval = ch - '0';
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
		return LP;
	} else if (ch == ')') {
		ch = getchar();
		return RP;
	}
	// error!
	// else if (ch == EOF) {
	// 	return END;
	// } else {
	// 	lex_error();
	// 	return -1;
	// }

	return -1;
}