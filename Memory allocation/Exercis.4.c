 /* DESCRIPTION:
 Read N lines of text, reserve memory according to the lines and count the vowels of each line. Print each line and the number of vowels */
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
 
 #define n 5
 void output (char*[], int*); //function  to show on screen
 void input (char*[] ); //function to have our string
 int vowels(char*); // function to count vowels
 
 int main ( ) {
 	char *string[n]; //pointer, our string
 	int j, vow[n];
 	
 	input(string); //function call where they entered the string
 	
 	/*Count vowels for each line of the vowel function*/
 	
 	for (j=0; j<n; j++) {
 		vow[j] = vowels(string[j]);
 	}
 	
 	output(string, vow); //output function call for printing
 	return 0;
 }
 
 //Data inputs
 void input(char* st[]){
 	char B[121];
 	int j, tam;
 	printf("\nWrite %d lines of text: ", n);
 	
 	//To obtain strings according to the number of lines that we have put in the macro
 	for (j=0; j<n; j++){
 		gets (B ); //saving the string
 		tam =(strlen (B)+1)*sizeof(char); //save string length and set 1 to extra byte
 		st[j] = (char*)malloc(tam); // memory block is assigned in each char string that is assigned, according to the size of the bytes
 		strcpy(st[j], B); //copy a b to new memory area pointed to by st [j], now st [j] has   B
 	}
}

//Find vowels
int vowels(char* s) {
	int k, j;
	/*vocal count of the string s*/
	for( j= k =0; j<strlen(s); j++) { //iteration based on string size with j and k initialized to 0. J position, K is for strings
		switch ( tolower(*(s+j))) { //the pointer of each position, that is, each letter, of the strings
			case 'a':;
			case 'e':; 
			case 'i':;
			case 'o':;
			case 'u': k++; //to go to the next string
		}
		 
	}
	return k;
}

//Output of our results
void output (char* st[], int* v) {
	int j;
	puts ("\nSalida de las lineas junto al numero de vocales " );
	for (j=0; j<n; j++){ //fir each string we are going to print:
		printf("%s: %2d\n", st[j], v[j]);
 	}
 }
 
 	
 	
 		
