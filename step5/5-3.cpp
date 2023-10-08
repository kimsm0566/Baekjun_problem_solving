#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char st[1000];
	int cnt = 0;
	int t;

	scanf("%d", &t);
	for(int j = 0;j < t;j++) {
		scanf("%s", &st);
		for (int i = 0;st[i] != NULL;i++) {
			cnt++;
		}

		printf("%c%c\n", st[0], st[cnt - 1]);
		cnt = 0;
	}
	
}