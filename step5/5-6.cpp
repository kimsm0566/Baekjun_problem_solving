#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char s[101] = { NULL, };

	scanf("%s", &s);

	for (int i = 97;i <= 122;i++) {
		int ch=0;
		int n = 0;
		for (int j = 0;s[j] != NULL;j++) {
			if (s[j] == (char)i) {
				n = 1;
				break;
			}
			ch++;
		}
		if (n == 1) printf("%d ", ch);
		else printf("%d ", -1);
	}
}
