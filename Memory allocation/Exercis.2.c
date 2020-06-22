/* Exercise 13-1: Write a program that uses pointers to set each element of an array to zero.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *vector, *ptr;
    int tam, i;
     
    printf("How many elements will the vector have?: ");
    scanf("%i",&tam);
    vector=malloc(tam*sizeof(int)); //we indicate the number of bytes that we are going to store in the vector variable, the size
    for(i=0;i<tam;i++) //here I am using that value to obtain the elements of my vector
    {
        printf("Write your element:");
        scanf("%d", vector + i);
    }
    printf("Your vector is: ");
    for(i=0;i<tam;i++)
    {
        printf("%d ",*(vector +i));
    }
    for (ptr = &vector[0]; ptr < &vector[tam]; ptr++) { //Here what it does is that ptr is equal to 0 and the condition tells us that ptr 
	//must be less than the last position in the array. Then the ptr increases in its positions.   
		*ptr = 0; //Equal to 0 each iteration
	}
	
    
//Final output
  printf("\n\nNow your array is: \n");
	for (i = 0; i < tam; i++) {
		printf("\nPosition[%d] = %d\n", i+1, vector[i]); //i+1 is to print the position in the new array, and data[i] is each element
	}
 	free(vector); //zona de memoria reservada con malloc ya no se necesita, puede ser liberada mediante la función free.
    getch();
    return 0;
}
