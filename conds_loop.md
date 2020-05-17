# **Introduction to structured programming**
-------------------------------------------------------------------------------------------------------------------------
## Loops.
![bucles](https://cdn1.iconfinder.com/data/icons/it-terms/512/loop-512.png)   

Many problems require repeating characteristics. In which some calculations or sequence of instructions are repeated over and over again using different data sets.
The concept of looping is described and discussed as the repeating section of code that is so named because when the execution of the last statement ends, the control flow returns to the first statement and another repetition of the code statement begins.
The typical loops are:
- **While**
- **Do-while.**
- **For.**   

## Repetitive structures.
Structures that repeat an instruction statement a specified number of times are called loops, and repeating the execution of an action execution is called iteration.
To stop the execution of the loops, a stop condition is used.   

## While:
This loop is one in which the body of the loop repeats while a certain condition is met. When the while statement is executed, the first thing that happens is that the condition is evaluated (a boolean expression. If it is evaluated false, no action is taken and the program proceeds to the next statement in the loop. If the boolean expression is true the body of the loop is then executed.
![while](https://encrypted-tbn0.gstatic.com/images?q=tbn%3AANd9GcRy9ZfrgBNgTXsJN44iTv1VFh6J8S_6_90__jFimOuFe5LoQdqr&usqp=CAU)
Ejemplo:
 ```
#include <stdio.h>
int main (){
	int num,cont,suma=0,multi=1;
	printf("Digite la cantidad de numeros que requiere: ");	scanf("%d",&num);
	cont=1;
	if(num>10){
		while (cont<=num){
			multi*=cont;
			cont++;
		}
		printf("La multiplicacion es %d",multi);
	}
	else {
		while(cont<=num){
			suma+=cont;
			cont++;
		}
		printf("La suma es %d",suma);
	}
	return 0;
}
```
### Infinite loop.
Some loops do not demand an end and others do not find an end by mistake in their design. A loop that never ends is called infinity and is harmful to a program and should always be avoided. 

For example:
```
#include <stdio.h>
 
  int main ()
   {
   for (;;) // or equivalently, while (1)
   {
      printf ("Infinite Loop \ n");
    }
    return 0;
  }
  ```
  
## Do-while.
Evaluates the expression at the beginning to the beginning of the repeating loop, always used to create a pre-test loop. Pretest loops are also called input controlled loops.
The body of the do-while loop always runs at least once even when the boolean expression is false.
![do-while](https://www.utn.edu.ec/reduca/programacion/estructuras/RepetitivasHagaMientras.png)   

Example:
 ```
#include <stdio.h>
int main (void){
	char letra= 'a';
	do {
		printf("%c\n",letra);
		letra++; // 61h =a, 62= b...
	} while (letra<='z');
	
}
 ```
 ## For.
It is used in case, the number of iterations must be set. In the For it executes the actions of the body of the loop a specified number of times and automatically controls the number of iterations or steps through the body of the loop.
Example:
 ```
#include <stdio.h>
#include <stdlib.h>
int main (void){
	int suma=0,i;
	for(i=0;i<=5; i++){
 	suma += i;
	}
	printf("La suma de los numeros impares es %d",suma);
	return 0;
}
 ```  
## Jump statements.
The jump sections that are used to influence the flow of execution during the execution of a loop statement.

### Break.
Programmers want to end a loop at a certain point in the body of the loop instead of waiting for the loop to end naturally on its input or output.
It can be used to terminate an iteration statement and when executed causes the control flow to jump off to the next statement immediately following the iteration statement. The statement can be placed inside the body of the loop to implement this effect.
The break statement is frequently used in conjunction with an if statement acting as an internal condition of the loop.   

![break](https://beginnersbook.com/wp-content/uploads/2017/09/break_statement_C.jpg)

Example:
```
scanf("%f", &x);

while (x<=100) {
if (x<0) {
printf("ERROR - VALOR NEGATIVO DE X");
break;
}
```
### Continue.
This statement causes the execution flow to skip the rest of the rest of a body in the loop to continue with the next loop or iteration. This feature is usually useful in some circumstances.
The loop can only be used within an iteration of a loop. The statement does not interfere with the number of times the body of the loop is repeated as it happens with interrupt, but simply influences the flow of control in any specific iteration.

Example:
```
#include <stdio.h>
int main()
{
                    int i;
                    for (i=0; i!10; i++)
                      	{
                            if (i == 5)
                                    continue;
                            printf(''%d'',i);
                      	}
                    printf(''\n Fuera del ciclo con valor i: %d \n'',i);
}

```

## ***Equipo***:
1. Osiris Cámara Salinas.
2. Victor Uribe Hernandez. 
