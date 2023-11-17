/*programmer:urooj baloch
Description:Question 9 
Date:27-10-2023
*/ 
 
 #include <stdio.h>
#define R 4
#define C 5
void spiralOfMatrix(int row, int col, int arr1[R][C])
{
    int i, rows = 0, column = 0;
    while (rows < row && column < col)
    {
        for (i = column; i < col; ++i)
        {
            printf("%d ", arr1[rows][i]);
        }
        rows++;
        for (i = rows; i < row; ++i)
        {
            printf("%d ", arr1[i][col-1]);
        }
        col--;
        if ( rows < row)
        {
            for (i = col-1; i >= column; --i)
            {
                printf("%d ", arr1[row-1][i]);
            }
            row--;
        }
        if (column < col)
        {
            for (i = row-1; i >= rows; --i)
            {
                printf("%d ", arr1[i][column]);
            }
            column++;    
        }        
    }
}
int main()
{
int i,j;
    int arr1[R][C] = { {1,  2,  3,  4,  5},
        {6, 7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };
 //------------- print original array ------------------	
	printf("The given array in matrix form is :  \n");
	for(i = 0; i < R; i++)
	{
	for (j=0;j<C;j++)
	{
	printf("%d  ", arr1[i][j]);
    } 
	printf("\n");
	}
//------------------------------------------------------ 	
printf("The spiral form of above matrix is: \n");	
    spiralOfMatrix(R, C, arr1);
    return 0;
}