#include <stdio.h>
int main() {
	int num1;
	scanf_s("%d", &num1);
	for (int i = 1;i <=9;i++) {
		printf("%d * %d = %d\n", num1, i, num1 * i);
	}
}