#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        unsigned long long M;
        int A, B, C;
        scanf("%llu %d %d %d", &M, &A, &B, &C);

        unsigned long long product_ABC = (unsigned long long)A * B * C;

        if (product_ABC == 0) {
            if (M == 0) {
                printf("0\n");
            } else {
                printf("-1\n");
            }
        } else if (M % product_ABC != 0) {
            printf("-1\n");
        } else {
            unsigned long long D = M / product_ABC;
            printf("%llu\n", D);
        }
    }

    return 0;
}

