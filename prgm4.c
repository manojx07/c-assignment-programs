#include<stdio.h>

int main()
{
	FILE *fptr;
	char ch;
	// To create a new file and write data into it
	fptr = fopen("file.txt","w");

	if(fptr == NULL){
		printf("Error in creating or opening a file");
		return(1);
	}

	fputs("hello\n",fptr);
	fprintf(fptr,"msis is in manipal\n");

	fclose(fptr);
	printf("content is written into the file\n");

	// To read the content of the file andm display the output

	fptr = fopen("file.txt","r");

	if (fptr == NULL){
		printf("Error in opening a file\n");
		return(1);
	}
	while ((ch = fgetc(fptr)) != EOF){
		printf("%c",ch);
	}
	fclose(fptr);
	return(0);
}