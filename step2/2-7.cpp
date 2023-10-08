#include <stdio.h>
int main() {
	int num1, num2, num3, max;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	max = num1;
	if (max < num2) max = num2;
	if (max < num3) max = num3;
	if ((num1 == num2) && (num1 == num3)) printf("%d", (num1 * 1000) + 10000);
	else if (((num1 == num2) && (num1 != num3)) || ((num1 == num3) && (num1 != num2))) printf("%d", (num1 * 100) + 1000);
	else if ((num2 == num3) && (num1 != num2)) printf("%d", (num2 * 100) + 1000);
	else printf("%d", max * 100);
}