#include<stdio.h>
#include<ctype.h>
void checkInput(char ch)
{
	if(isdigit(ch)){
		printf("input is digit \n");
	}else if (isalpha(ch)){
		printf("input is letter \n");
	}else{
		printf("the input us neither digit nor letter\n");
	}
}
int main()
{
	char input;
	printf("enter a single character or digit:\n");
	scanf("%c",&input);
	checkInput(input);
	return(0);
}