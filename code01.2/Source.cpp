#include<stdio.h>
int main() {
	int x, y, z, a;
	printf("Enter 3 Number : ");
	scanf_s("%d ", &x);
	scanf_s("%d ", &y);
	scanf_s("%d", &z);

	if (x >= y && x >= z) {
		a = x;
	}
	else if (y >= x && y >= z) {
		a = y;
	}
	else if (z >= x && z >= y) {
		a = z;
	}
	printf("\nThe largest number is %d", a); 
	return 0;
}