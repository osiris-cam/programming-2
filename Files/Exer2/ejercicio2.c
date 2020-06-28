/* 
## exercise 2 ##multiply two columns as dot point 
inputfile
1 3
4 4
4 5
outputfile
3
16
20
*/

#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main (){
	int c, i=0, j=0;
	int num=0,result=0;
    char array1[11];
    char array2[11];
	FILE *input;
	FILE *output;
	 
	 
	input =fopen("inputArr.txt","rb");
	output =fopen("outputArr.txt", "wt");
	
	if (input ==NULL){
		printf("Error");
		return 1;
	} 
	
	for(i=0;i<6;i++){
		
		fscanf(input,"%d", &array1[i]);
	}  
	 //Now we have an array: 1 3 4 4 4 5
	 for (i = 0; i < 6; i+=2){ //is the reason why we are using i+=2
        result  = array1[i] * array1[i+1]; // 1x3 4x4 4x5
        fprintf(output, "%d\n", result);
         
		printf("%d\n", result);
         
    	}
    
    fclose(input);
    fclose(output);
    return 0;
}
