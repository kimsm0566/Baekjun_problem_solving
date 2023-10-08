#include <stdio.h>
int main() {
	int h, m;
	scanf_s("%d %d", &h, &m);
	m = m - 45;
	if (m < 0) h = h - 1;
	if (h < 0) h = 23;
	if (m >= 0) printf("%d %d", h, m);
	else printf("%d %d", h, m+60);
}