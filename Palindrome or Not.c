#include <stdio.h> 
#include <math.h> 
int main() 
{ 
    int originalNumber, reverseNumber = 0, tempNumber; 
    printf("Enter a number: "); 
    scanf("%d",& originalNumber); 
    tempNumber = originalNumber; 
    while (tempNumber) 
    { 
        int cur_digit = tempNumber % 10; 
        reverseNumber = reverseNumber * 10 + cur_digit; 
        tempNumber = tempNumber / 10; 
    } 
    if (originalNumber == reverseNumber) 
    {
    	printf("Palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
}
