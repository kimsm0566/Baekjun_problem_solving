#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[35] = {0,};
	int std;

	for (int i = 1;i <= 30;i++) arr[i] = i;

	for (int i = 1;i <= 28;i++) {
		scanf(" %d", &std);
		arr[std] = 0;
	}

	for (int i = 1;i <= 30;i++) {
		if (arr[i] != 0) printf("%d\n", arr[i]);
	}
}

