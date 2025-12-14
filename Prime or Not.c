#include<stdio.h>
int main()
{
	int n,i,fact=0;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		fact ++;
	}
	if(fact==2)
	{
	    printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
	

}
