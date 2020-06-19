/*DESCRIPTION:
Write a function that takes a single string as its argument and returns a pointer to the first nonwhite character in the string.*/

#include <stdio.h>
#include <ctype.h> //we are going to use the function isspoce()
#include <string.h>
#include <stdlib.h>

char *space(char *string);
int main(){
	char string[30];
	//Input
	printf("Write your string: \n");
	scanf("%s", string); 
	printf("Letter: '%c'\n", *space(string)); //I print the return of the function

	return 0;
}

//My second fuction to find the letter.
char *space(char *string){
	
	//Comprobación
	while (*string != '\0') { //while it's not null
		
		if (! isspace(*string)){ // isspace() function checks whether a character is a white-space character or not.
			return string;// if is 0 then returns the pointer
        }
		++string;
	}
	
	return string;
}
