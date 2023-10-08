#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rev(int n) {
	char s[100];
	int l; 
	int r = 0;

	sprintf(s, "%d",n);

	l = strlen(s);
	for (int i = l - 1; i >= 0; i--) {
		r *= 10;
		r += s[i] - '0';
	}

	return r;
}

int main() {

	int num1=0,num2=0, temp=0;
	
	scanf("%d %d", &num1, &num2);

	if (rev(num1) > rev(num2)) printf("%d", rev(num1));
	else printf("%d", rev(num2));
}