/* DESCRIPTION:
Exercise 14-2: Write a program to copy a file, expanding all tabs to multiple spaces. 
Input: Hola		como 	estás
Output in file2: Hola como estás	  

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *file1;
FILE *file2;
int main() {
	char ch[80];
	char c, c2;
	file1 = fopen("file1.txt", "wt");
	
	//content of my file
	if (file1 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		printf("Enter your string: \n");
		gets(ch);
		fputs(ch,file1);
		//printf("Data has written succesfully\n");
		fclose(file1);
	}
	
	
	file1 =fopen("file1.txt","r");
	
	if (file1 ==NULL){
		printf("Error");
		return 0;
	}
	
	//change the tab to spaces 
	file2 =fopen("file2.txt","wt"); //I need to save in the file 2
	while ((c = fgetc(file1)) != EOF){ //It is analyzed character by character from file1 to file3.
		if (c=='\t'){ //if each place is equal to a tab so: 
		 	c = ' ';// is equal to an space
		 }
		fputc(c, file2); //put it in the file 1
     }
    fclose(file2);
	fclose(file1);
	
	file2 =fopen("file2.txt","r");
	printf(" \nFinal result:\n");
	while ((c2 = fgetc(file2)) != EOF){
		printf("%c",c2);
	}
	
	printf("\n\nPlease, check the file2");
	fclose(file2);
	 
}
