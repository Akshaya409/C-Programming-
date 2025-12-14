#include<stdio.h>
#include<string.h>
int main()
{
	char str[]="Hello World!";
	printf("original string:%s\n",str);
	strlwr (str);
	printf("lower case string is:%s\n",str);
	return 0;
}
