/* 
DESCRIPTION: 
C program to compare two files character by character.

Source: https://codeforwin.org/2018/02/c-program-compare-two-files.html */

#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>

void compare(FILE *file1, FILE *file2) //function
{  
	int error = 0, place = 0, line = 1; //error is to save the error numbers, pos is about the position, line is the line of error
     
    char c1 = getc(file1); //saving characters of file1 in variable c1
    char c2 = getc(file2); //saving characters of file1 in variable c2
  
    // iterate until the end of file, is char by char 
    
    printf("\n\t\t\tResults:\n");
    while (c1 != EOF && c2 != EOF) //This is checking if the letters are the same or not.
    { 
        place++; //if they are not equal, increase in position
  
        if (c1 == '\n' && c2 == '\n') //it is running the lines, if it has the file
        { 
            line++; 
            place = 0; //the positions are equal to zero because every time you enter a line there are other error positions 
        } 
  
        
        if (c1 != c2) //after seeing the position, and the line, now check if there is an error in that part. Then try again and do the same until finished
        { 
            error++; //the error increases
            printf("\n\tLine Number : %d \tError" " In position : %d \n", line, place); //printing of results, updates
        } 
  
         
        c1 = getc(file1); // saved character until end of file 
        c2 = getc(file2); 
    } 
  
    printf("\nNumber of Errors : %d\t", error); //final printing of errors
} 

int main() 
{ 

	FILE *file1; 
	FILE *file2;
    //char c,c2;
    char ch[80], ch2[80];
    //open both files, they have content
	file1 = fopen("file1.txt", "wt");  
	file2 = fopen("file2.txt", "wt"); 

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
	
	file2 = fopen("file2.txt", "wt");
		if (file2 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		printf("\nEnter your string: \n");
		gets(ch2);
		fputs(ch2,file2);
		//printf("Data has written succesfully\n");
		fclose(file2);
	}
  	
  	
	  
  //to see if there are files
    if (file1 == NULL || file2 == NULL) 
    { 
       printf("Error");  //if there aren't is an error
       exit(0); 
    } 
  
	file1 = fopen("file1.txt", "rt");  
	file2 = fopen("file2.txt", "rt");
  //calling the function
    compare(file1, file2); 
  
    // closing my files
    fclose(file1); 
    fclose(file2); 
    return 0; 
} 
