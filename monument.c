#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        for (int j = 1; j <= N; j++) {
            printf("%d ", j);
        }
        for (int j = N - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

