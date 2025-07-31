#include<stdio.h>
int main()
{
	int n,result;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	result = 1<<n;
	printf("2^%d = %d\n",n,result);
	return(0);
}