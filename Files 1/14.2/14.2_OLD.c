#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fd;
int main() {
	int c;
	
	fd =fopen("string.txt","wt");
	
	if (fd ==NULL){
		printf("Error");
		return 1;
	} 
	
	while ((c=getchar())!= EOF){
		fputc(c,fd);
	}
	fclose(fd); 
	
	fd =fopen("string.txt","r");
	
	if (fd ==NULL){
		printf("Error");
		return 1;
	} 
	
	
	while ((c=fgetc(fd))!= EOF){
		 if (c=='\t'){
		 	c = ' ';
		 }
	fputchar (c);	 
	}
	
	
	
	
fclose(fd);	
}
