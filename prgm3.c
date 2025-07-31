#include<stdio.h>
#include<ctype.h>
void converttolower(char ch)
{
	char lower = tolower(ch);
	printf("lowercase character : %c\n",lower);
}
int main()
{
	char upper;
	printf("enter the uppercase character:\n");
	scanf("%c",&upper);
	converttolower(upper);
}
