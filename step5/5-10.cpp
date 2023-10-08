#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int time(char a) {

	if (a == 65 || a == 66 || a == 67) return 3;
	else if (a == 68 || a == 69 || a == 70) return 4;
	else if (a == 71 || a == 72 || a == 73) return 5;
	else if (a == 74 || a == 75 || a == 76) return 6;
	else if (a == 77 || a == 78 || a == 79) return 7;
	else if (a == 80 || a == 81 || a == 82 || a == 83) return 8;
	else if (a == 84 || a == 85 || a == 86) return 9;
	else if (a == 87 || a == 88 || a == 89 || a == 90) return 10;
	else return 0;
}


int main() {
	char st[16] = { NULL, };

	int cnt = 0;

	scanf("%s", st);

	for (int i = 0;st[i] != '\0';i++) {
		cnt = cnt + time(st[i]);
	}
	printf("%d", cnt);

}