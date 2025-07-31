#include<stdio.h>
void checkleapyear(int year){
	if ((year % 4 == 0 && year % 100 != 0)||(year % 400 == 0)){
		printf("it is leap year\n");
}
	else
{
		printf("it is not leap year\n");
}
}
int main()
{
	int year;
	printf("enter the year:\n");
	scanf("%d",&year);
	checkleapyear(year);
	return(0);
}
