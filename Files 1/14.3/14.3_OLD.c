
/*Mi codigo no corri� y lo hice de muchas maneras posibles, al final encontr� un Github que tenia la soluci�n y me bas� muchisimo de �l, pero lleg� la hora de la entrega. 
No compila por la funci�n getline*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main (){
	int  number;        
	FILE *first;   
	FILE *second; 
	FILE *third;  
	char *line = NULL;   
	size_t  len = 0;     
	
	first = fopen("number.txt", "r");
	second= fopen("numbdivisible.txt", "w");
	third = fopen("others.txt", "w");
	
	if (first == NULL) {
		printf("Error");
		return 1;
	}
	
		if (second == NULL) {
		printf("Error");
		return 1;
	}
	
		if (third == NULL) {
		printf("Error");
		return 1;
	}
	
	
	
	while (getline(&line, &len, first) != -1) {
		 
		sscanf(line, "%d", &number);

		 
		if ((number % 3) == 0){
		
			fprintf(first, "%d\n", number);
		}
		else{
		
			fprintf(third, "%d\n", number);
			}
	}

	
	free(line);


	fclose(first);
	fclose(second);
	fclose(third);

	return 0;
}
	


