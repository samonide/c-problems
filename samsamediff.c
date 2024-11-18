#include <stdio.h>
#include <string.h>

int min(int a, int b, int c) {
    if (a <= b && a <= c) return a;
    if (b <= a && b <= c) return b;
    return c;
}

int main() {
    char str1[101], str2[101], str3[101];
    scanf("%s %s %s", str1, str2, str3);

    int length = strlen(str1);
    int operations = 0;

    for (int i = 0; i < length; i++) {
        int changeCount = 0;
        if (str1[i] != str2[i]) changeCount++;
        if (str2[i] != str3[i]) changeCount++;
        if (str1[i] != str3[i]) changeCount++;

        if (changeCount == 2) {
            operations += 1;
        } else if (changeCount == 3) {
            operations += 2;
        }
    }

    printf("%d\n", operations);
    return 0;
}
