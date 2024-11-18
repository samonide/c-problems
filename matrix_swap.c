#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        int temp = matrix[i][0];
        matrix[i][0] = matrix[i][M - 1];
        matrix[i][M - 1] = temp;
    }

    for (int j = 0; j < M; j++)
    {
        int temp = matrix[0][j];
        matrix[0][j] = matrix[N - 1][j];
        matrix[N - 1][j] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
