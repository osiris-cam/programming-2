/*Description:
Calculate prime numbers in a range to be determined by the user*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, cont, j, *first, *second ; //I declare j and k for my for iterators. I declare count to praise how many times it is divisible. We reserve space to store a pointer
    first = malloc (sizeof(int)); // we indicate the number of bytes that we are going to store in the first variable, the size
    second= malloc (sizeof(int)); // we indicate the number of bytes that we are going to store in the second variable, the size
    
    //Input
    printf("Write the number where you want to start : \n "); scanf("%d",  &first);
    printf("Write the number where you want to end : \n "); scanf("%d",  &second);
    
    
    
    for (i = first; i <= second; i++) { //For to my prime numbers. Here i am using the parameter that I had in malloc
        cont = 0;				//My count is equal 0
        for (j = 1; j < i; j++) { //For to divide the prime number (i) by numbers from 1 to i.
            if ((i % j) == 0) { 	// prime number / (1,2,3,etc)
                cont++;				//For each divisible number store 1 in my count
            }
        }
        if(cont==1){             //If my count sote at least 1, the number is prime.
          printf("%d\n", i);
        }
    }
    return 0;
}
