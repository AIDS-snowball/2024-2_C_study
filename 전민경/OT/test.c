#pragma warning(disable:4996)
#include <stdio.h>
void gcdlcm(int a, int b, int *x, int *y);
int main() {
	int a, b, *x, *y;
	scanf("%d %d", &a, &b);
	gcdlcm(a, b, &x, &y);
	printf("%d %d", x, y);
	return 0;
}void gcdlcm(int a, int b, int *x, int *y) {
	int gcd = 1;
	for (int i = 1; i <= (a < b ? a : b); i++) {
		if (a%i == 0 && b%i == 0)
			gcd = i;
	}
	*x = gcd;
	int low = (a*b) / gcd;
	*y = low;
}
