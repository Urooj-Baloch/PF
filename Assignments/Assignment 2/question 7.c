/*programmer:urooj baloch
Description:Question 7 
Date:27-10-2023
*/

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int ages[], int prices[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Sort based on age in ascending order
            if (ages[j] > ages[j + 1]) {
                swap(&ages[j], &ages[j + 1]);
                swap(&prices[j], &prices[j + 1]);
            } else if (ages[j] == ages[j + 1]) {
                // If ages are equal, sort based on price in descending order
                if (prices[j] < prices[j + 1]) {
                    swap(&prices[j], &prices[j + 1]);
                }//end if
            }//end else if
        }//end inner for
    }//end outer for
}//end void function

int main() {
    int ages[] = {24, 25, 20, 28, 27}; // Example ages
    int prices[] = {21, 30, 19, 28, 35}; // Example prices
    int n = sizeof(ages) / sizeof(ages[0]);

    printf("Original List:\n");
    printf("Age\tPrice\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", ages[i], prices[i]);
    }

    // Sort the lists
    bubbleSort(ages, prices, n);

    printf("\nSorted List in Ascending Order based on Age:\n");
    printf("Age\tPrice\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", ages[i], prices[i]);
    }

    printf("\nSorted List in Descending Order based on Price (within the same age):\n");
    printf("Age\tPrice\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\n", ages[i], prices[i]);
    }

    return 0;
}
