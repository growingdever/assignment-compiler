typedef struct s_data {
    int lhs;
    int rhs;
    int result;
} data;

/*
 * pointer is useful!
 */
void sum(data* d) {
    d->result = d->lhs + d->rhs;
}

int main() {
    /* user defined struct data */
    data d;
    d.lhs = 5;
    d.rhs = 10;

    sum(&d);
	printf("sum : %d\n", d.result);

	return 0;
}