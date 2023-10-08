#include <stdio.h>
int main() {
	int a, b,b1,b2,b3;
	scanf_s("%d %d", &a, &b);
	b1 = b / 100;
	b2 = (b / 10)%10;
	b3 = b % 10;

	b1 = a * b1;
	b2 = a * b2;
	b3 = a * b3;
	printf("%d\n", b3);
	printf("%d\n", b2);
	printf("%d\n", b1);
	printf("%d", b1*100+b2*10+b3);
}
