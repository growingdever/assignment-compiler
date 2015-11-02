#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include "type.h"
#include "y.tab.h"
#include "print_ast.h"
#include "syntax.h"

extern int syntax_err;
extern A_NODE *root;

void initialize();

int main(int argc, char *argv[]) {
    int new_in = open("/Users/loki/programming/assignment-compiler/mid-term/test1.c", O_RDONLY);
    dup2(new_in, STDIN_FILENO);
    close(new_in);

    initialize();
    yyparse();
    if (syntax_err) exit(1);
    print_ast(root);

    exit(0);
}