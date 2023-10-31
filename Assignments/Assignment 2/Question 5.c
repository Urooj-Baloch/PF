/* Programmer:Urooj Baloch
Date:27-10-2023
Description:print Ramanujan series less than n^3 Question 5
*/
#include <stdio.h>
void printRamanujan(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = i + 1; k <= n; k++) {
                for (int l = k; l <= n; l++) {
                    if (i * i * i + j * j * j == k * k * k + l * l * l) {
                        printf("%d^3 + %d^3 = %d^3 + %d^3 = %d\n", i, j, k, l, i * i * i + j * j * j);
                    }
                }
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    printf("Ramanujan-Hardy numbers less than %d^3:\n", n);
    printRamanujan(n);

    return 0;
}
