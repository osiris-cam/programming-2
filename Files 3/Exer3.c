/* 	DESCRIPTION:
	C program to copy contents of one file to another.
	Source: https://codeforwin.org/2018/02/c-program-to-copy-file.html */

#include <stdio.h> 
#include <stdlib.h>  
  
int main() 
{ 
    FILE *file1, *file2; 
   char c1,c2;
    char ch[80], ch2[80]; //to save the input
    
    //open both files, they don't have content
	file1 = fopen("file1.txt", "wt");  
	file2 = fopen("file2.txt", "wt"); 

	if (file1 ==NULL  ){ 
		printf("Unable to open the file\n");
	}
	else {
		printf("Enter your first string: \n"); //we save the input in the file1
		gets(ch);						//we get the content of the string
		fputs(ch,file1);				//we put the string to file1
		 
		fclose(file1);
	}
	
	file2 = fopen("file2.txt", "wt");
		if (file2 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		printf("\nEnter your second string: \n"); //we save the input in the file2
		gets(ch2);							//we get the content of the string
		fputs(ch2,file2);					//we put the string to file2
		 
		fclose(file2);
	}
	
	//to see if there are files
    if (file1 == NULL || file2 == NULL) 
    { 
       printf("Error");  //if there aren't is an error
       exit(0); 
    } 
  
	file1 = fopen("file1.txt", "rt");  
	file2 = fopen("file2.txt", "wt");
  
    // Read contents from file 
    //c1 = fgetc(file1); 
    while (c1 != EOF)  //this happens while it is not the end of the text
    { 
        fputc(c1, file2); //each character is placed from file1 to file2
        c1 = fgetc(file1); 
    } 
  	
    printf("\nContents copied to file2, please check file2 "); 
    
	fclose(file1); 
    fclose(file2);
    return 0; 
}
