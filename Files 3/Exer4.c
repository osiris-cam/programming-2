
/* DESCRIPTION: 
	C program to convert lowercase to uppercase and uppercase to lowercase 
    characters in file. Example:
    
    <<Input: 
	HeLloOo, My Name IIs OsiIris
    <<Output in file2: 
	hElLOoO, mY nAME iiS oSIiRIS
    
    SOURCE: https://codeforwin.org/2018/03/c-program-to-convert-uppercase-to-lowercase-in-file.html */

#include <stdio.h>
#include <stdlib.h>

void UpperLower(FILE *file1, FILE *file2){ //function to exchange lowercase to uppercase and vice verse
	char ch;
	
	while ( (ch = fgetc(file1)) != EOF) { //while it is not the end of the text, go through each character and:
		
		ch = (isupper(ch))? tolower(ch):toupper(ch); //Check if the character enters the condition: If it's uppercase it is converted to lowercase. Else, if it's lowercase to uppercase 
    	fputc(ch, file2); //put the change condition to file2
	}
	printf("\nConversion ready, check file2 now");	
}
int main()
{
    FILE  *file1; //where we are going to save the input
    FILE *file2; //to save the change of the UpperLower function
    char ch[80]; //to pass to the file1
    
    //open  file 
    file1 = fopen("file1.txt", "wt");
    
    //FIRST FILE:
	if (file1 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		printf("Enter your  string: \n");
		gets(ch); //we get the content of the string
		fputs(ch,file1); //we put the string to file1
		
		fclose(file1); //we close the file
	}
	
	file1 = fopen("file1.txt", "rt"); //prepare for reading in the UpperLower function
	
	file2 = fopen("file2.txt", "wt"); //prepare for writing in the UpperLower function
	
	UpperLower(file1,file2); //function call
	
	//Close the files
	fclose(file1);
	fclose(file2);
}
