#include<stdio.h>
#include<stdlib.h>
void generateandsum(){
	int a,b,sum;
	a=rand()%100;
	b=rand()%100;
	sum=a+b;
	printf("Random number 1:%d\n",a);
	printf("random number 2: %d\n",b);
	printf("sum=%d\n",sum);
}
int main()
{
	generateandsum();
	return(0);
}