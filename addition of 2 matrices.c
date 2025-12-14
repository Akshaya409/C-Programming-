#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],r,c,n;
	printf("enter of two matrices:\n");
	printf("enter size of square matrix n:");
	scanf("%d",&n);
	printf("enter elements in first matrix :\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	printf("enter elements in second matrix:\n");
	for(r=0;r<n;r++)
	{
		for(c=0;c<n;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	printf("\n the first matrix is:");
	for(r=0;r<n;r++)
	{
		printf("\n");
		for(c=0;c<n;c++)
		printf("%d\t",a[r][c]);
	}
	printf("\n the second matrix is:");
	for(r=0;r<n;r++)
	{
		printf("\n");
		for(c=0;c<n;c++)
		printf("%d\t",b[r][c]);
	}
	for(r=0;r<n;r++)
	for(c=0;c<n;c++)
	sum[r][c]=a[r][c]+b[r][c];
	printf("\n addition of two matrix is:");
	for(r=0;r<n;r++)
	{
		printf("\n");
		for(c=0;c<n;c++)
		printf("%d\t",sum[r][c]);
	}
	return 0;
}
