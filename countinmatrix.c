#include <stdio.h>

int main() {
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);
    
    int matrix[N][M];
    int counts[1001] = {0};

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
            counts[matrix[i][j]]++;
        }
    }

    for (int i = 0; i < X; i++) {
        int number;
        scanf("%d", &number);
        printf("%d\n", counts[number]);
    }

    return 0;
}
