#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char st[1000];
	int i;

	scanf("%s", &st);
	scanf("%d", &i);
	printf("%c", st[i-1]);
}