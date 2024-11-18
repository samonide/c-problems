#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int counts[100001] = {0};
    int number, uniqueCount = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &number);
        counts[number]++;
    }

    for (int i = 1; i <= 100000; i++) {
        if (counts[i] == 1) {
            uniqueCount++;
        }
    }

    printf("%d\n", uniqueCount);

    return 0;
}

