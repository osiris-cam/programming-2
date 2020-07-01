/*DESCRIPTION:
	 C program to merge contents of two files to third file.
	
	SOURCE: https://codeforwin.org/2018/02/c-program-merge-two-files.html
	*/


#include <stdio.h>
#include <stdlib.h>

//Function to join files
void  joinFiles(FILE *file1, FILE *file2, FILE *file3){
	char c1,c2;
	
	while ((c1 = fgetc(file1)) != EOF){ //It is copied character by character from file1 to file3.
		fputc(c1, file3);
     }
     
	while ((c2 = fgetc(file2)) != EOF){ //It is copied character by character from file2 to file3.
		fputc(c2, file3);    
     }   
	
	printf("\nFiles merged succesfully, please check file3"  );
	
}

int main(){
	
	FILE *file1;
    FILE *file2;
    FILE *file3;
    char ch[80], ch2[80]; //to save the input   
    
    //open both files
	file1 = fopen("file1.txt", "wt");  
	file2 = fopen("file2.txt", "wt"); 
	

		//FIRST FILE:
	if (file1 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		printf("Enter your first string: \n");
		gets(ch); //we get the content of the string
		fputs(ch,file1); //we put the string to file1
		
		fclose(file1); //we close the file
	}
	
		//SECOND FILE
	
	if (file2 ==NULL  ){
		printf("Unable to open the file\n");
		}
		
	else {
		printf("\nEnter your string: \n");
		gets(ch2); //we get the content of the string
		fputs(ch2,file2); //we put the string to file1
		
		fclose(file2); //we close the file
	}
	
	fflush(stdin);
    file1 = fopen("file1.txt", "rt");  // prepare for reading in the joinFiles function
	file2 = fopen("file2.txt", "rt");	// prepare for reading in the joinFiles function 
	file3 = fopen("file3.txt","wt");	// prepare for writing in the joinFiles function 
    
    joinFiles(file1,file2,file3); //function call
	
	//Close the files
	fclose(file1);
    fclose(file2);
    fclose(file3);
}

