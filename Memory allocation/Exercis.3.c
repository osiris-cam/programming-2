 /*
  DESCRIPTION:
  Leer dos strings, si el segundo string comienza con la palabra "osiris" se añade a la primera. La memoria debe reservarse con realloc ()
  
  <<<For example:
  string 1: hi
  Strin 2: osiris
  
  output:
  string 1: Hiosiris
  string 2: osiris*/
 
 
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 
 int main () {
 	char *c1 =NULL, *c2 =NULL, B[121]; ///memory blocks
	char *key ="osiris";
	int tam;
	
	puts ("\nFirst array: ");
	gets(B);
	tam = (strlen(B) +1 ) *sizeof(char); //save string length and set 1 to extra byte
	c1= (char*) realloc (c1,tam); // for the conversion to the pointer type we put the type of variable, pointer to block and the size 
	strcpy(c1,B); //copy B to new memory area pointed to by c1, now c1 has what B ------------
	
	puts ("\nSecond array: ");
	gets(B);
	tam = (strlen(B) +1 ) *sizeof(char);
	c2= (char*) realloc (c2,tam);
	strcpy(c2,B); //copy B to new memory area pointed to by c2, now c2 has what B ------------

	/*Comparison of the first characters of c2 with key.*/
	
	if (strlen (key)<= strlen (c2)) { //if the size of my keyword is greater than my c2, it obviously does not fulfill the purpose of the program
		int j; //iterator, could be declared above
		char *R =NULL; //new pointer type variable for realloc
		R = realloc (R, (strlen(key)+1)*sizeof(char)); /*copy strlen (key), the first characters to R*/
		for (j=0; j<strlen(key); j++){ //each letter placed in the Keys bits will be iterated
			*(R +j) = *(c2+j); //points to the position of R and goes for each bit (j). In the same way IT does it for c2
		}
		*(R+j) = '\0'; //asignation 
		
		/*Compare with Key*/
		
		if (strcmp (key, R) == 0) { //if both variables are equal
			tam = (strlen (c1) + strlen (c2)+1)* sizeof(char); //c1 size is increased
			c1=realloc (c1,tam); //we expand to the block with the new size
			strcat (c1,c2); //allows us to add memory block c2 to c1
		}
	}
	
	printf("\nFirst string: %s  ", c1); //Print the new variable with the added
	printf("\nSecond string: %s", c2); //print c2
	
	return 0;
}
	
	
