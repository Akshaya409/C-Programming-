#include<stdio.h>
int main()
{
	int r,c,n;
	int matrix[10][10];
	int trace=0;
	printf("enter the size of the square matrix:");
	scanf("%d",&n);
	printf("enter of the matrix:\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			scanf("%d",&matrix[r][c]);
		}
	}
	for(r=0;r<n;r++)trace=matrix[r][c];
	{
		for(c=0;c<n;c++)
		{
		trace=matrix[r][r];
		}
	}
	printf("trace of the matrix=%\n",trace);
	return 0;
}
