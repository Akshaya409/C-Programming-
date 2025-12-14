#include<stdio.h>
int main()
{
	int i,position,n;
	printf("enter n value");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position of the element to delete:");
	scanf("%d",&position);
	for(i=position-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
