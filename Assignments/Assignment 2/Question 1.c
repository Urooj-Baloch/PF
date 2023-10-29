/*programmer:urooj baloch
Description:Question 1 
Date:27-10-2023
*/
#include <stdio.h>

int main() {
    int numbatsman,numinnings;
    printf("enter the number of batsman\n");
    scanf("%d",&numbatsman);
printf("enter the number of innings\n");
    scanf("%d",&numinnings);
int battingperformance[numbatsman][numinnings];
    for (int i = 0; i < numbatsman; i++) {
        printf("Enter batting performance for batsman %d:\n", i + 1);
        for (int j = 0; j < numinnings; j++) {
            printf("Inning %d: ", j + 1);
            scanf("%d", &battingperformance[i][j]);
        }
    }
    for(int i=0;i<numbatsman;i++){
        int totalruns=0;
        int max=battingperformance[i][0];
        int century=0;
        int halfcentury=0;
        int avg=0;
        for(int j=0;j<numinnings;j++){
            totalruns+=battingperformance[i][j];
            if(battingperformance[i][j]>max){
                max=battingperformance[i][j];
            }
            if(battingperformance[i][j]>=100){
                century++;
            }
            if(battingperformance[i][j]>=50 || battingperformance[i][j]>=99){
                halfcentury++;
            }
        }
        avg=totalruns/numinnings;
        printf("Total runs by batsman %d  : %d\n",i+1,totalruns);
        printf("Highest score made by batsman %d : %d\n",i+1,max);
        printf("Total centuries made by batsman %d : %d\n",i+1,century);
        printf("Total half centuries made by batsman %d : %d\n",i+1,halfcentury);
    }
    
    
    
    return 0;
}//end main