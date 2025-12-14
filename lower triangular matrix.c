#include<stdio.h>
int main()
{
	int r,i,j;
	printf("enter the num of rows/cols of the square matrix:");
	scanf("%d",&r);
	int a[r][r];
	printf("enter the elemnts of the matrix:\n");
	for(i=0;i<r;i++)
	for(j=0;j<r;j++)
	scanf("%d",&a[i][j]);
	int is_lower_triangular=1;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			if(j>i&&a[i][j]!=0||j<=i&&a[i][j]==0)
			{
				is_lower_triangular=0;
				break;
			}
		}
	}
	if(is _lower_triangular)
	printf("given matrix is a lower triangular matrix");
	else
	printf("given matrix is not an lower triangular matrix");
	return 0;
	
}
