#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	
	char* s=(char*)malloc(sizeof(char)*1000000);

	scanf("%[^\n]s", s);

	int n = strlen(s);
	int cnt = 0;
	for (int i = 0;i < n;i++) {
		if (s[i] == ' ') cnt++;
	}
	cnt++;

	if (s[0] == ' ') cnt--;
	if (s[n-1] == ' ') cnt--;
	printf("%d", cnt);

	free(s);
}