#include <stdio.h>
int main() {
	int h, m, time;
	scanf_s("%d %d %d", &h, &m, &time);
	m = m + time;
	if (m >= 60) {
		h = h + (m / 60);;
		if (h >= 24) h = h%24;
		m =m% 60;
	}
	printf("%d %d", h, m);asdfsdf
}