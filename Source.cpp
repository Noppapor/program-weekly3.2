#include<stdio.h>
int main() {
	int x, y, z , min;
	scanf_s(" %d %d %d", &x, &y, &z);
	min = x;
	if (min >= y) min = y;
	if (min >= z) min = z;
	printf("%d", min);

}