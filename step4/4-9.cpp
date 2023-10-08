#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, m,first,last,temp;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * (n+1));

	for (int i = 1;i <= n;i++) arr[i] = i;

	for (int i = 0;i < m;i++) {
		scanf("%d %d", &first, &last);
		for (int j = first;j < last;j++) {
			for (int k = last;k > j;k--) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
				last--;
				break;
			}
		}
	}
	for (int i = 1;i <= n;i++) printf("%d ", arr[i]);

	free(arr);
}