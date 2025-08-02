#include<stdio.h>
int main()
{
	int num,reverse=0,digit,temp;
	printf("enter the num whether to check it is a palindrome number:\n");
	scanf("%d",&num);
	// temp variable is used to copy num into temporary variable
	temp=num;
	while(temp!=0)
	{
		digit=temp%10;
		reverse=reverse*10+digit;
		temp=temp/10;
	}
	if (reverse==num)
	{
		printf("the entered number is a palindrome\n");
	}
	else
	{
	printf("the entered number is not a palindrome\n");
	}
	return(0);
}
	
