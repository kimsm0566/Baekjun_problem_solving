#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, max=0;
	double avg = 0;

	scanf("%d", &n);
	double* arr = (double*)malloc(sizeof(double) * n + 1);

	for (int i = 0;i < n;i++) {
		scanf("%lf", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0;i < n;i++) {
		avg = avg + (arr[i] / max * 100);
	}
	avg = avg / n;
	printf("%.6g", avg);

}