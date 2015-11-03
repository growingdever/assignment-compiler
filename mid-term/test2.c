void main() {
    int three = 3;
    int four = 4;
    int what = three < four ? three : four;
	int result = 0;

	while (four > 0) {
		four = four - 1;
		result = result + what;
	}

	printf("result = %d\n", result);
}