#include<stdio.h>
int main()
{
	int max,x,y,z;
	printf("enter the value of x,y,z");
	scanf("%d,%d,%d",&x,&y,&z);
	max=(x>y?x:y);(x>z?x:z);(y>z?y:z);
	printf("Maximum=%d\n",max);
	return 0;
	
}
