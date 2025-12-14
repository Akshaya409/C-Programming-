#include<stdio.h>
int main()
{
	int tel,hin,mat,sci,eng;
	float tot,avg;
	printf("enter the value of tel,hin,mat,sci,eng");
	scanf("%d,%d,%d,%d,%d",&tel,&hin,&mat,&sci,&eng);
	tot=tel+hin+mat+sci+eng;
	avg=tot/5;
	printf("Total=%f/n",tot);
	printf("Average=%f/n",avg);
	return 0;
	
}
