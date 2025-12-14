#include<stdio.h>
int main()
{
	int a[10][10],trans[10][10];
	int rows,cols,i,j;
	printf("e nter the number of rows:");
	scanf("%d",&rows);
	printf("enter the number of columns");
	scanf("%d",&cols);
	printf("enter the elements of the matrix :\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			trans[j][i]=a[i][j];
		}
	}
	printf("\n original matrix :\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n transpose of the matrix:\n");
	for(i=0;i<cols;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("%d",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
