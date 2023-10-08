#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char st[100];
	int cnt=0;

	scanf("%s", &st);
	for (int i = 0;st[i] != NULL;i++) {
		cnt++;
	}
	printf("%d", cnt);
}