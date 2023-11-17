/* Programmer : Urooj baloch
   Date :10-10-2023
   Description :LAB 7 Q9
   */

#include <stdio.h>

#define MAX_BRANCHES 3  // You can adjust the number of branches as needed
#define MAX_PHONES 4    // You can adjust the number of mobile phones as needed

int main() {
    // Declare variables
    int bills[MAX_BRANCHES][MAX_PHONES];
    int totalBillAllBranches = 0;
    int maxBranchID = 0, maxMobileID = 0;
    int maxBill = 0;

    // Input bills for each mobile phone in each branch
    for (int i = 0; i < MAX_BRANCHES; i++) {
        printf("Enter bills for branch %d:\n", i + 1);
        for (int j = 0; j < MAX_PHONES; j++) {
            printf("Enter bill for mobile phone %d: ", j + 1);
            scanf("%d", &bills[i][j]);
            totalBillAllBranches += bills[i][j];

            // Check for maximum bill and update variables accordingly
            if (bills[i][j] > maxBill) {
                maxBill = bills[i][j];
                maxBranchID = i + 1;
                maxMobileID = j + 1;
            }
        }
    }

    // Print total bill for all branches
    printf("\nTotal bill for all branches: %d\n", totalBillAllBranches);

    // Print total bill for each branch
    printf("\nTotal bill for each branch:\n");
    for (int i = 0; i < MAX_BRANCHES; i++) {
        int totalBillBranch = 0;
        for (int j = 0; j < MAX_PHONES; j++) {
            totalBillBranch += bills[i][j];
        }
        printf("Branch %d: %d\n", i + 1, totalBillBranch);
    }

    // Print branch ID where the maximum bill arrived
    printf("\nBranch ID where maximum bill arrived: %d\n", maxBranchID);

    // Print branch and mobile phone IDs where the bill is highest
    printf("\nBranch and Mobile Phone IDs where bill is highest of all mobile phones:\n");
    printf("Branch: %d, Mobile Phone: %d, Bill: %d\n", maxBranchID, maxMobileID, maxBill);

    return 0;
}
