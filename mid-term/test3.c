enum e_numbers { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN } numbers;

void main() {
	int arr[FIVE] = { TWO, FOUR, SIX, EIGHT };
	int i, sum = 0;

	arr[4] = TEN;

	for (i = 0; i < FIVE; i ++) {
		sum = sum + arr[i];
	}

	printf("%d\n", sum);
}