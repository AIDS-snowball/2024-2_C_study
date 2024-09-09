#include<stdio.h>
#pragma warning(disable:4996)

int main(void) {
	char x[20], * p, k;
	int i;

	p = x;

	for (i = 0;; i++) {
		scanf("%c", p);
		if (*p == '#') break;
		p++;
	}

	k = i;

	for (i = 0; i < k; i++) {
		printf("%c", *(--p));
	}

	return 0;
}
