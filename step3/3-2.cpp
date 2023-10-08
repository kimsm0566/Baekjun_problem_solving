#include <stdio.h>
int main() {
	int t, num1, num2, a[10];
	scanf_s("%d", &t);
	for (int i = 0;i < t;i++) {
		scanf_s("%d %d", &num1, &num2);
		a[i] = num1 + num2;
	}
	for (int i = 0;i < t;i++) {
		printf("%d\n",a[i]);
	}

}