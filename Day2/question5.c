#include<stdio.h>
int main()
{
	int num=2,N,count=0;
	// declare how many prime numbers you HAVE TI PRINT
	printf("input how many prime no's you have to print");
	scanf("%d",&N);
	printf("first %d prime numbers are:\n",N);
	while(count<N)
	{
		int isPrime=1;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			isPrime=0;// the number is not a prime number
			break;
		}
	}
		if(isPrime)
		{
			printf("%d", num);
			count++;
		}
		num++;
	printf("/n");
	return(0);
	}
}
