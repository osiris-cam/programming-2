/*DESCRIPTION:
Exercise 13-1: Write a program that uses pointers to set each element of an array to zero.*/

#include <stdio.h>
#define TAM 5 //My micro is defined to use in the soze of my array

int main (void){
    int data[TAM]; //My array wwith its size
    int i;
    int *ptr; // is to create a new array when we are going to have 0

//Input of our array
    printf("Enter elements:\n");
    for (i = 0; i < TAM; i++) {
        scanf("%d", data + i); //this is equivalente to &data [i] 
	}
	
	//Output of our array
	
    printf("Your array is: \n");
    for (i = 0; i < TAM; i++){
        printf("%d,", *(data + i)); //Is equivalent to print data[i]
    
	}
	
	//We need to replace all elements with zeros
	for (ptr = &data[0]; ptr < &data[TAM]; ptr++) { //Here what it does is that ptr is equal to 0 and the condition tells us that ptr 
	//must be less than the last position in the array. Then the ptr increases in its positions.   
		*ptr = 0; //Equal to 0 each iteration
	}

//Final output
  printf("\n\nNow your array is: \n");
	for (i = 0; i < TAM; i++) {
		printf("\nPosition[%d] = %d\n", i+1, data[i]); //i+1 is to print the position in the new array, and data[i] is each element
	}
	return 0;
}
        

