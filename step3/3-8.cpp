#include <stdio.h>
int main() {
	int t, num1, num2;

	scanf_s("%d", &t);
	for (int i = 0;i < t;i++) {
		scanf_s("%d %d", &num1, &num2);
		printf("Case #%d: %d + %d = %d\n", i + 1,num1,num2, num1 + num2);
	}
}