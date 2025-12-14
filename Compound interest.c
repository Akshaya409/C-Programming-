#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,n,t,A,CI;
	printf("enter the principle amount p");
	scanf("%f",&p);
	printf("enter the rate r");
	scanf("%f",&r);
	printf("enter the no.of times n");
	scanf("%f",&n);
	printf("enter the time taken t");
	scanf("%f",&t);
	A=p*pow((1+r/n),n*t);
	CI=A-p;
	printf("compound interest=%f",CI);
	return 0;
	
	}
