#include <stdio.h>
int main() {
	int x, n, a, b,add=0;
	scanf_s("%d %d", &x, &n);
	for (int i = 0;i < n;i++) {
		scanf_s("%d %d", &a, &b);
		add = add + a * b;
	}
	(add == x) ? printf("Yes") : printf("No");
}