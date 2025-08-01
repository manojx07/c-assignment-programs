#include<stdio.h>
int main(){
    int num,sum=0;
    printf("enter a five digit number");
    scanf("%d",&num);
    if(num<10000||num>99999)
        {printf("the entered number is not a five digit number");
        }
     while(num!=0){
        sum+=num%10;
        num=num/10;
     }
     printf("the sum of five digits is:%d",sum);
     return(0);
    }
