#include <stdio.h>
int main() {
	int year;
	scanf_s("%d", &year);
	if (year % 4 == 0 && ((year % 100 == 0) == (year % 400 == 0))) printf("1");
	else printf("0");
}