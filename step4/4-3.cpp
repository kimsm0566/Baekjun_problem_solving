#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {


	int min, max, n;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0;i < n;i++) {
		scanf("%d", &arr[i]);
		if (i == 0) {
			min = arr[i];
			max = arr[i];
		}
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("%d %d", min, max);
	free(arr);
}