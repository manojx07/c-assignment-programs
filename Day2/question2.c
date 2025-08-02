#include<stdio.h>
int main()
{
    int num,out=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    while(num!=0)
    {
        int digit=num%10;
        out=out*10+digit;
        num=num/10;
    }
    printf("the reverse of the number is:%d\n",out);
    return(0);
}
