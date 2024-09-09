#include<stdio.h>

input(int *xx, int *yy, int *zz) {
	scanf("%d %d %d", xx, yy, zz);
}

output(int *xx, int *yy, int*zz) {
	printf("%d %d %d\n", *xx, *yy, *zz);
}
int main(){
	int x, y, z;

	input(&x, &y, &z);

	output(&x, &y, &z);

	return 0;
}
