//
// Created by loki on 15. 11. 3..
//

#ifndef COMPILER_MID_TERM_MY_PRINTER_H
#define COMPILER_MID_TERM_MY_PRINTER_H

#include "type.h"

void print_origin_program(A_NODE*);
void print_program(A_NODE*, int);
void print_all_identifiers(A_ID *);
void print_identifier(A_ID*);
void print_type(A_TYPE*);
void print_struct(A_ID*);
void print_function(A_ID*);
void print_enum(A_ID*);
void print_initializer(A_NODE*);
void print_all_parameters(A_ID*);
void print_all_fields(A_ID*);
void print_all_enumerators(A_ID*);
void print_unit(A_NODE*);
void print_compound_statement(A_NODE*);
void print_all_statements(A_NODE*);
void print_statement(A_NODE*);
void print_expression(A_NODE*);
void print_operator(A_NODE*);
void print_integer(int);
void print_string(char*);
void print_function_call(A_NODE*);
void print_argument_list(A_NODE*);

#endif //COMPILER_MID_TERM_MY_PRINTER_H
