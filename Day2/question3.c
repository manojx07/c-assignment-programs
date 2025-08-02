#include<stdio.h>
int main()
{
	int num,digit,count=0;
	int temp;
	// declare the number
	printf("enter the number:\n");
	scanf("%d",&num);
	//give the digit to count its occurance
	printf("enter the digit(0-9):\n");
	scanf("%d",&digit);
	temp=num;
	while(temp!=0)
	{
		int current_digit=temp%10;
		if(current_digit==digit)
		{
			count++;
		}
		temp=temp/10;
	}
	printf("the occurance of the digit is :%d \n",count);
	return(0);
}
