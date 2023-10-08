#include <stdio.h>
int main() {
	int num,add=0;
	scanf_s("%d", &num);
	for (int i = 1;i <= num;i++) {
		add = add + i;
	}
	printf("%d", add);
}