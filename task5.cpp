#include <stdio.h>
#include <math.h>

int main() {
    int n, x, i, sum = 0;

    printf("Enter the limit\n");
    scanf("%d", &n);

    printf("Enter the value of x\n");
    scanf("%d", &x);

    if (x < 0 || n < 0) {
        printf("illegal value");
    } else {
        for (i = 0; i <= n; i++) {
            sum = sum + (int)pow(x, i);
        }
        printf("sum = %d", sum);
    }

    return 0;
}
