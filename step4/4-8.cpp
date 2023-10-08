#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int arr[11];
	int cnt = 0,ans=0;

	for (int i = 0;i < 10;i++) {
		scanf(" %d", &arr[i]);
		arr[i] = arr[i] % 42;
	}

	for (int i = 0;i < 10;i++) {
		for (int j = 0;j <= i;j++) {
			if (arr[i] == arr[j]) cnt++;
			
		}
		if (cnt < 2) ans++;
		cnt = 0;
	}
	printf("%d", ans);
}

