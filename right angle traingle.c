#include<stdio.h>
int main()
{
	int r=1,c=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
