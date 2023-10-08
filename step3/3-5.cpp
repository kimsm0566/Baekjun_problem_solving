#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	n = n / 4;
	for (int i = 0;i < n;i++) {
		printf("long ");
	}
	printf("int");
}