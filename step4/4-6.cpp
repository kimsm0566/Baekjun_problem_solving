#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, m;
	int cn1, cn2, temp;
	scanf("%d %d", &n, &m);

	int* arr = (int*)malloc(sizeof(int) * (n+1));

	for (int i = 1;i <= n;i++) arr[i] = i;

	for (int i = 0;i < m;i++) {
		scanf("%d %d", &cn1, &cn2);
		temp = arr[cn1];
		arr[cn1] = arr[cn2];
		arr[cn2] = temp;
	}

	for (int i = 1;i <= n;i++) {
		printf("%d ", arr[i]);
	}
}