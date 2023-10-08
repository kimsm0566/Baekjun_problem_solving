#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d\n", &N);
    int numb[101];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%1d", &numb[i]);
        sum += numb[i];
    }
    printf("%d", sum);

    return 0;
}