enum { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN };

int a[TEN];
void sort(int l, int r) {
	int i, j, x, w;
	int k;

	i = l;
	j = r;
	x = a[(l+r) / 2];

	do {
		while (a[i] < x) {
			i ++;
		}

		while (x < a[j]) {
			j --;
		}

		if (i <= j) {
			w = a[i];
			a[i] = a[j];
			a[j] = w;
			i ++;
			j --;
		}
	} while(i <= j);

	if (l < j) {
		sort(l, j);
	}
	if (i < r) {
		sort(i, r);
	}
}

void main() {
	int k;
	a[ZERO] = ZERO;
	a[ONE] = ONE;
	a[TWO] = THREE;
	a[THREE] = FIVE;
	a[FOUR] = SEVEN;
	a[FIVE] = NINE;
	a[SIX] = TWO;
	a[SEVEN] = FOUR;
	a[EIGHT] = SIX;
	a[NINE] = EIGHT;

	for (k = 0; k < TEN; k ++) {
		printf("%d ", a[k]);
	}
	printf("\n");

	sort(0, 9);

	for (k = 0; k < TEN; k ++) {
		printf("%d ", a[k]);
	}
	printf("\n");
}