#include <stdio.h>
#include <stdlib.h>

int main() {

    int n0, n1, n2, n3, n4;

    printf("n0: ");
    scanf("%d", &n0);
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);
    printf("n4: ");
    scanf("%d", &n4);

    printf("absoluto(%d) = %d\n", n0, abs(n0));
    printf("absoluto(%d) = %d\n", n1, abs(n1));
    printf("absoluto(%d) = %d\n", n2, abs(n2));
    printf("absoluto(%d) = %d\n", n3, abs(n3));
    printf("absoluto(%d) = %d\n", n4, abs(n4));

    return 0;
}