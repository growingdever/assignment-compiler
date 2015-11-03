//
// Created by loki on 15. 11. 3..
//

#include "my_printer.h"
#include <stdio.h>

extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

int indentation_depth = 0;

void print_origin_program(A_NODE* node) {
    printf("======= program ==========\n");
    print_program(node, 0);
}

void print_program(A_NODE* node, int level) {
    print_unit(node);
}

void print_unit(A_NODE* node) {
    switch (node->name) {
        case N_PROGRAM:
            print_all_identifiers((A_ID *) node->clink);
            break;
        case N_STMT_EXPRESSION:
            break;
        default :
            printf("****syntax tree error******");
    }
}

void print_indentation() {
    for (int i = 0; i < indentation_depth; i ++) {
        printf("    ");
    }
}

void print_all_identifiers(A_ID *identifer) {
    while (identifer != NULL) {
        print_identifier(identifer);
        printf(";\n");

        identifer = identifer->link;
    }
}

void print_identifier(A_ID* identifier) {
    print_indentation();

    A_TYPE* type = identifier->type;
    if (type == int_type) {
        printf ("%s : ", identifier->name);
        print_type(type);
        if (identifier->init != NULL) {
            print_initializer(identifier->init);
        }
    } else if (type == float_type) {
        printf ("%s : ", identifier->name);
        print_type(type);
        if (identifier->init != NULL) {
            print_initializer(identifier->init);
        }
    } else if (type == char_type) {
        printf ("%s : ", identifier->name);
        print_type(type);
        if (identifier->init != NULL) {
            print_initializer(identifier->init);
        }
    } else if (type == string_type) {
        printf ("%s : ", identifier->name);
        print_type(type);
        if (identifier->init != NULL) {
            print_initializer(identifier->init);
        }
    } else if (type == void_type) {
        printf ("%s : ", identifier->name);
        print_type(type);
        if (identifier->init != NULL) {
            print_initializer(identifier->init);
        }
    } else {
        if (type->kind == T_STRUCT) {
            print_struct(identifier);
        } else if (type->kind == T_FUNC) {
            print_function(identifier);
        } else if (type->kind == T_ENUM) {
            print_enum(identifier);
        } else if (type->kind == T_ARRAY) {
            printf ("%s : ", identifier->name);
            print_type(type);
            if (identifier->init != NULL) {
                print_initializer(identifier->init);
            }
        } else if (type->kind == T_POINTER) {
            printf ("%s : ", identifier->name);
            print_type(type);
            if (identifier->init != NULL) {
                print_initializer(identifier->init);
            }
        }
    }
}

void print_type(A_TYPE* type) {
    if (type == NULL) {
        return;
    }

    print_type (type->element_type);

    if (type == int_type) {
        printf ("int");
    } else if (type == float_type) {
        printf ("float");
    } else if (type == char_type) {
        printf ("char");
    } else if (type == string_type) {
        printf ("char*");
    } else if (type == void_type) {
        printf ("void");
    } else {
        if (type->kind == T_ARRAY) {
            printf("[");
            print_expression(type->expr);
            printf("]");
        } else if (type->kind == T_POINTER) {
            printf ("*");
        }
    }
}

void print_struct(A_ID* id) {
    printf("struct %s {\n", id->name);
    indentation_depth++;
    print_all_fields(id->type->field);
    indentation_depth--;
    printf("}\n");
}

void print_function(A_ID* id) {
    if (id->type->element_type == int_type)
        printf("int ");
    else if (id->type->element_type == float_type)
        printf("float ");
    else if (id->type->element_type == char_type)
        printf("char[%d] ", id->type->size);
    else if (id->type->element_type == void_type)
        printf("void ");
    else if (id->type->element_type->kind == T_NULL)
        printf("(null) ");
    else if (id->type->element_type->prt)
        printf("* ");

    printf("%s {\n", id->name);
    indentation_depth++;
    print_compound_statement(id->type->expr);
    indentation_depth--;
    printf("}\n");
}

void print_enum(A_ID* id) {
    printf("enum {");
    print_all_enumerators(id->type->field);
    printf("} %s", id->name);
}

void print_initializer(A_NODE *node) {
    switch (node->name) {
        case N_INIT_LIST:
        {
            int is_first = 1;

            printf(" = { ");

            while (node != NULL && node->name != N_INIT_LIST_NIL) {
                if (!is_first) {
                    printf(", ");
                }
                is_first = 0;

                print_expression(node->llink->clink);

                node = node->rlink;
            }

            printf(" }");
        }
            break;
        case N_INIT_LIST_ONE:
            printf (" = ");
            print_expression(node->clink);
            break;
        case N_INIT_LIST_NIL:
            break;
        default:
            printf("****syntax tree error******");
    }
}

void print_all_fields(A_ID *fields) {
    print_indentation();
    while(fields != NULL) {
        print_identifier(fields);
        fields = fields->link;
    }
}

void print_all_enumerators(A_ID *fields) {
    int is_first = 1;

    print_indentation();
    while(fields != NULL) {
        if (!is_first) {
            printf(", ");
        }
        is_first = 0;

        printf("%s", fields->name);
        if (fields->init != NULL) {
            print_initializer(fields->init);
        }

        fields = fields->link;
    }
}

void print_compound_statement(A_NODE* node) {
    if (node->name != N_STMT_COMPOUND) {
        return;
    }

    if (node->llink != NULL) {
        print_all_identifiers((A_ID *) node->llink);
    }

    if (node->rlink != NULL) {
        print_all_statements(node->rlink);
    }
}

void print_all_statements(A_NODE* node) {
    while(node != NULL && node->name != N_STMT_LIST_NIL) {
        print_statement(node->llink);
        node = node->rlink;
    }
}

void print_statement(A_NODE* statement) {
    print_indentation();
    switch(statement->name) {
        case N_STMT_WHILE:
            printf("while (");
            print_expression(statement->llink);
            printf(") {\n");
            indentation_depth++;
            print_compound_statement(statement->rlink);
            indentation_depth--;
            print_indentation();
            printf("}\n");
            break;
        case N_STMT_EXPRESSION:
            print_expression(statement->clink);
            printf(";\n");
            break;
        case N_STMT_FOR:
            printf("for (");
            print_expression(statement->llink);
            printf(") {\n");
            indentation_depth++;
            print_compound_statement(statement->rlink);
            indentation_depth--;
            print_indentation();
            printf("}\n");
            break;
    }
}

void print_expression(A_NODE* node) {
    switch(node->name) {
        case N_EXP_IDENT :
            printf("%s", ((A_ID *) node->clink)->name);
            break;
        case N_EXP_INT_CONST :
            print_integer((int) node->clink);
            break;
        case N_EXP_FLOAT_CONST :
            print_string((char *) node->clink);
            break;
        case N_EXP_CHAR_CONST :
            print_integer((int) node->clink);
            break;
        case N_EXP_STRING_LITERAL :
            print_string((char *) node->clink);
            break;
        case N_EXP_POST_INC:
            print_expression(node->clink);
            printf(" ++");
            break;
        case N_EXP_POST_DEC:
            print_expression(node->clink);
            printf(" --");
            break;
        case N_EXP_MUL :
        case N_EXP_DIV :
        case N_EXP_MOD :
        case N_EXP_ADD :
        case N_EXP_SUB :
        case N_EXP_LSS :
        case N_EXP_GTR :
        case N_EXP_LEQ :
        case N_EXP_GEQ :
        case N_EXP_NEQ :
        case N_EXP_EQL :
        case N_EXP_AND :
        case N_EXP_OR :
        case N_EXP_ASSIGN :
            print_expression(node->llink);
            print_operator(node);
            print_expression(node->rlink);
            break;
        case N_EXP_CONDITIONAL:
            print_expression(node->llink);
            printf(" ? ");
            print_expression(node->clink);
            printf(" : ");
            print_expression(node->rlink);
            break;
        case N_EXP_FUNCTION_CALL:
            print_function_call(node);
            break;
        case N_EXP_ARRAY:
            print_expression(node->llink);
            printf("[");
            print_expression(node->rlink);
            printf("]");
            break;
        case N_FOR_EXP:
            print_expression(node->llink);
            printf("; ");
            print_expression(node->clink);
            printf("; ");
            print_expression(node->rlink);
            break;
    }
}

void print_operator(A_NODE* node) {
    switch(node->name) {
        case N_EXP_ADD:
            printf(" + ");
            break;
        case N_EXP_SUB:
            printf(" - ");
            break;
        case N_EXP_MUL:
            printf(" * ");
            break;
        case N_EXP_DIV:
            printf(" / ");
            break;
        case N_EXP_LSS:
            printf(" < ");
            break;
        case N_EXP_GTR:
            printf(" > ");
            break;
        case N_EXP_LEQ :
            printf(" <= ");
            break;
        case N_EXP_GEQ :
            printf(" >= ");
            break;
        case N_EXP_ASSIGN:
            printf(" = ");
            break;
    }
}

void print_integer(int i) {
    printf("%d", i);
}

void print_string(char *str) {
    printf("%s", str);
}

void print_function_call(A_NODE* node) {
    print_expression(node->llink);
    printf(" (");
    print_argument_list(node->rlink);
    printf(")");
}

void print_argument_list(A_NODE* node) {
    int is_first = 1;
    while(node != NULL && node->name != N_ARG_LIST_NIL) {
        if (!is_first) {
            printf(", ");
        }
        is_first = 0;

        if (node->llink != NULL) {
            print_expression(node->llink);
        }
        node = node->rlink;
    }
}