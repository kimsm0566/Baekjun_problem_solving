#include <stdio.h>
int main() {
	int nums[101], num, x, cnt = 0;;

	scanf_s("%d", &num);

	for (int i = 0;i < num;i++) {
		scanf_s("%d ", &nums[i]);
	}
	scanf_s("%d", &x);

	for (int i = 0;i < num;i++) {
		if (nums[i] == x) cnt++;
	}
	printf("%d", cnt);
}