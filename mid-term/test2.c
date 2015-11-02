int multiply(int a, int b) {
	int result;
	result = 0;
	while (a) {
		if (a % 2) {
			result = result + b;
		}
		a = a / 2;
		b = b * 2;
	}

	return result;
}

void main() {
    int three = 3;
    int four = 4;
    int what = three < four ? three : four;
	int i;

	i = multiply(120, what);

	printf("result = %d\n", i);
}