#include <stdio.h>
int main() {
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.10g", a / b);
}
