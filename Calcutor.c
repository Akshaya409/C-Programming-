#include<stdio.h>
int main()
{
	char op;
    int n1,n2;
	prinf("enter the values of the operator");
	scanf("%c",&op);
	printf("enter the values of n1 and n2");
	scanf("%d %d",&n1,&n2);
	switch(op)
	{
		case'+':printf("result=%d",n1+n2);
		break;
		case'-':printf("result=%d",n1-n2);
		break;
		case'*':printf("result=%d",n1*n2);
		break;
		case'/':printf("result=%d",n1/n2);
		break;
		default:printf("invalid operator");
	}
	return 0;
}
