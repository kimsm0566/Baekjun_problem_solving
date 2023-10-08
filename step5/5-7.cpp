#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int n;
	
	scanf("%d", &n);
	char* s = (char*)malloc(sizeof(char)*(n+1));

	for (int i = 0;i < n;i++) {
		int r,N;
		scanf("%d %s", &r, s);
		N = strlen(s);
		for (int k = 0;k < N;k++) {
			for (int j = 0;j < r;j++) {
				printf("%c", s[k]);

			}
		}
		printf("\n");
	}
	free(s);
}