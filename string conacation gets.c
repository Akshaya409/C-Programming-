#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[30];
	int i,j;
	printf("\n enter the string:");
	gets(s1);
	printf("\n enter the string:");
	gets(s2);
	i=strlen(s1);
	for(j=0;s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\n concated string is %s",s1);
	return 0;
	
	
}
