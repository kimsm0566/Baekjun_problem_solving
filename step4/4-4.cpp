#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[9];
	int max, max_arr=1;

	for (int i = 0;i < 9;i++) {
		scanf(" %d", &arr[i]);
		if (i == 0) max = arr[i];
		if (arr[i] > max) {
			max = arr[i];
			max_arr = i+1;
		}
	}
	printf("%d\n%d", max, max_arr);
}