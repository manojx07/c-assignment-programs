#include<stdio.h>
int main()
{
	int num,sum=0;
	printf("enter the five digit number:\n");
	scanf("%d",&num);
	if(num<10000||num>99999)
	{
		printf("the entered number is not a five digit number");
	}
	while(num!=0)
	{
		sum+=num%10;
		num=num/10;
	}
	printf("the sum of digits are:%d\n",sum);
	return(0);
}

