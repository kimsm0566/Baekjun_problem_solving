#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int n, m;
	int first_bk, last_bk, number;

	scanf("%d %d", &n, &m);
	int* bk = (int*)malloc(sizeof(int) * n);

	memset(bk, 0, sizeof(int) * n);

	for (int i = 0;i < m;i++) {
		scanf("%d %d %d", &first_bk, &last_bk, &number);
		for (int j = first_bk-1;j <= last_bk-1;j++) {
			bk[j] = number;
		}
	}

	for (int i = 0;i < n;i++) {
		printf("%d ", bk[i]);
	}
	free(bk);
}
