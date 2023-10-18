
/*programmer:urooj baloch
Description:Question 6 lab 7
Date:10-10-2023
*/
#include <stdio.h>
int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    int num[n];
    int freq[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }//1 for loop end
     
    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }//second for loop end

    // Calculate the frequency of each element
    for (int i = 0; i < n; i++) {
        int curr_Element = num[i];
        freq[i] = 1; 
        for (int j = i + 1; j < n; j++) {
            if (num[j] == curr_Element) {
                freq[i]++;
                
                num[j] = -1;//to avoid recounting
            }//end if
        }
    }//end third forloop

    // Display the frequency of each element
    printf("Element\tFrequency\n");
    for (int i = 0; i < n; i++) {
        if (num[i] != -1) {
            printf("%d\t%d\n", num[i], freq[i]);
        }//end if
    }//end for loop

    return 0;
}//end main

