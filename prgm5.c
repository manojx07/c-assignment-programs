#include<stdio.h>
#include<ctype.h> //use for character handelling 

int main(int argc, char const *argv[]){
	FILE *fptr;
	char ch, ch1;
	fptr = fopen("file.txt","r");

	if (fptr == NULL){
		printf("Error in creating or opening the file\n");
		return(0);
	}
	while((ch = fgetc(fptr)) !=EOF){
		ch1= toupper(ch);
		printf("%c",ch1);
	}
	fclose(fptr);
	return 0;
}