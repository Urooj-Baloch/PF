#include <stdio.h> 

int min(int a, int b, int c) 
{ 
	int m = a; 
	if (m > b) 
		m = b; 
	if (m > c) 
		m = c; 
	return m; 
} 

void printMaxSubSquare(int R,int C,int M[R][C]) 
{ 
	int i, j,count=0; 
	int S[R][C]; 
	int max_of_s, max_i, max_j; 

	/* Set first column of S[][]*/
	for (i = 0; i < R; i++) 
		S[i][0] = M[i][0]; 

	/* Set first row of S[][]*/
	for (j = 0; j < C; j++) 
		S[0][j] = M[0][j]; 

	for (i = 1; i < R; i++) { 
		for (j = 1; j < C; j++) { 
			if (M[i][j] == 1) 
				S[i][j] = min(S[i][j - 1], S[i - 1][j], 
							S[i - 1][j - 1]) 
						+ 1; 
			else
				S[i][j] = 0; 
		} 
	} 

	/* Find the maximum entry, and indexes of maximum entry 
	in S[][] */
	max_of_s = S[0][0]; 
	max_i = 0; 
	max_j = 0; 
	for (i = 0; i < R; i++) { 
		for (j = 0; j < C; j++) { 
			if (max_of_s < S[i][j]) { 
				max_of_s = S[i][j]; 
				max_i = i; 
				max_j = j; 
			} 
		} 
	} 

	printf("\nMaximum size sub-matrix is: \n"); 
	for (i = max_i; i > max_i - max_of_s; i--) { 
		for (j = max_j; j > max_j - max_of_s; j--) { 
			printf("%d ", M[i][j]); 
		} 
		printf("\n");
		count++; 
	} 
	printf("\nDimension of largest square submatrix found is: [%d][%d]", count,count);
} 

int main() 
{
	int R,C,i,j;
	printf("Enter no of rows: ");
	scanf("%d", &R);
	printf("Enter no of columns: ");
	scanf("%d", &C);
	int M[R][C];
	for (i=0; i<R; i++)
	{
		for (j=0; j<C; j++)
		{
			printf("element-[%d][%d]: ",i,j);
			scanf("%d", &M[i][j]);
		}
	}
	printMaxSubSquare(R,C,M); 
	getchar(); 
}