/*programmer:urooj baloch
Description:Question 4 
Date:27-10-2023
*/
#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("Enter no of rows: ");
	scanf("%d", &r);
	printf("Enter no of columns: ");
	scanf("%d", &c);
	char maze[r][c];
	printf("Enter elements ('W' for walls, 'O' for open paths, 'S' for start, 'E' for exit):\n");
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("character-[%d][%d]: ", i,j);
			scanf(" %c", &maze[i][j]);
		}
	}
	printf("\n");
	printf("Original maze:\n");
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("%c ", maze[i][j]);
		}
		printf("\n");
	}
	int start,end,currend,currstart;
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			if (maze[i][j]=='S') {
				start=i;
				end=j;
				break;
			}
		}
	}
	currstart=start;
	currend=end;
	printf("\nTransversal maze:");
	while (maze[currstart][currend]!='E') {
		printf("(%d,%d) ",currstart,currend);
		if (currstart<r-1 && maze[currstart+1][currend]!='W') {
			currstart++;
		}
		else if (currend<c-1 && maze[currstart][currend+1]!='W') {
			currend++;
		}
		else {
			printf("Transversal maze can't be found due to constraint");
		}
	}
	printf("(%d,%d) ",currstart,currend);
	printf("\n");
	return 0;
}