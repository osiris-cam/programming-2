
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void compare(FILE *file1, FILE *file2, FILE *fileDiv3){
	int num;
	
	while(fscanf(file1, "%d", &num) != EOF){
		if (num%3==0){
			fprintf(fileDiv3, "%d\n", num);
		}
		else {
			fprintf(file2, "%d\n", num);
		}
	}
	
	printf("\nPlease, cheack your file2 and fileDiv3");
	
}
 
int main() {
	FILE *file1;
	FILE *file2;
	FILE *fileDiv3;
	int num1; 
	 
	file1 = fopen("file1.txt", "r");
	
	if (file1 ==NULL  ){
		printf("Unable to open the file\n");
	}
	else {
		while(fscanf(file1, "%d", &num1) != EOF){
		printf("%d\n", num1);	 
		}
		
		fclose(file1);
	}
	
	
	file1 =fopen("file1.txt","r");
	file2 =fopen("file2.txt","wt");
	fileDiv3 =fopen("fileDiv3.txt","wt");
	
	compare (file1,file2, fileDiv3   );
	
	fclose(file1);
    fclose(file2);
    fclose(fileDiv3);
}
