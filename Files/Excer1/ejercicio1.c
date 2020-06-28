/*
Solve the next two exercises and upload both c files or upload to github and send the link (not a txt file with the link inside)
## exercise 1 ##get the average of a list
inside input file 
->
20.
30.3
4.
34.4
4.0
30.0
4.
7.
8.6
inside outputfile -> "prom is 11.3" */
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main (){
	int c, i=0, j=0;
	float num=0,sum=0, average=0;
    char array[11];
	FILE *input;
	FILE *output;
	//char direccion [] = "C:\\Users\\hp\\Documents\\2do\\progra\\ficheros\\string.txt"; 
	 
	input =fopen("input.txt","rt");
	output =fopen("output.txt", "wt");
	
	if (input ==NULL){
		printf("Error");
		return 1;
	} 
	
	// Keep reading in integers (which are placed into "n") until end of file (EOF)

	while(fscanf(input, "%f", &num) != EOF){

         sum += num;
     	 i++;
      	average = (sum / i);
	}
        
    //average/=j;
    printf("Average is %.1f", average);
    fprintf(output, "Average  is %.1f", average);
    fclose(input);
    fclose(output);
}
