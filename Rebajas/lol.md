# Review of python
---------------------------------------------------------------------------------------------------------------------------------------------------------
First, is important to start with the variables because as we know in Python is easier work with them due we don't need the declaration like in C:

## Input and output data.
Here I also added the coment function becauase I don´t know in wich classification I can put it.

| **Data**                        | **Example**                                    |
| ----------                      | ----------                                     |
| TypeOfVariable (input("text"))  | numero= int(input("Please, writhe the number"))|
| print()                         | print(f"The number is {numero})                |
| #                               | # This function only supports one line comments|
| '''                             | # This function supports multi-line   comments |

## Assignment of values

| **assignment of values**     | **Definition** | **Example**  |
| :----------------            | :------------: | ---------:   |
| No declaration               | Integer        | age= 11      |
| No declaration               | Float          | wei= 60.5    |
| No declaration               | Char           | let= 'L'     |
| No declaration               | String         | name= "Luis" |
| No declaration               | boolean        | aF = True    |

## Arithmetic operators

| **Arithmetic operators**     | **Definition** | **Example**             |
| :----------------            | :------------: | ---------:              |
| +                            | Sum            | a= 3 + 2  --> r= 5      |
| -                            | Subtraction    | a= 3 - 2  --> r= 1      |
| -                            | Denial         | a= -2     --> r= -2     |
| *                            | Multiplication | a= 3 * 2  --> r= 6      |
| **                           | Exponent       | a= 2 ** 6 --> r= 64     |
| /                            | Division       | a= 3.5 / 2 --> r= 1.75  |
| //                           | Int division   | a= 3.5 / 2 --> r= 1     |
| %                            | Modul          | a= 7 % 2   --> r= 1     |

## Relationship operations.

| **Relationship operations**  | **Definition**       | **Example**             | **Boolean** |
| :----------------            | :------------:       | ---------:              |  ---------: |   
| >                            | Greater than         | 12 > 24                 | False       |
| <                            | Smaller than         | 12 < 24                 | True        |
| >=                           | Greater than or equal| 67 >= 72                | False       |
| <=                           | Less than or equal to| 16 <= 17                | True        |
| ==                           | Equal to             | 5==10                   | False       |
| !=                           | Other than           | blue != verde           | True        |


## Logical operators.
In this table they are ordered in order of priority:

| **Logical operator** | **Definition** |
| ----------           | ----------     |
| not                  | Negation       |
| and                  | Conjunction    |
| or                   | Disjunction    |

## Assignment operators.
Esto es para reducir el codigo y es muy importante haber creado la variable primero.

| **Assignment operator** | **Definition** |
| ----------              | ----------     |
| a+=b                    | a= a+b         |
| a-=b                    | a= a-b         |
| a*=b                    | a= a* b        |
| a/=b                    | a= a/b         |
| a%=b                    | a= a%b         |
| a**=b                   | a= a**b        |

## Integrated functions

| **Function**        | **Definition**                | **Example**            |
| :----------------   | :------------:                | ---------:             |
| str()               | Pass a number to string       | n= str(11.9)           |
| len()               | It counts elements of a string| h= len("Osiris")---> 6 |
| lower()             | Returns lowercase string      | 'OSIRIS'.lower()       |
| upper()             | Returns capital letters       | 'osiris'.upper()       |
| len()               | Determine size of a list      | len(lista)             |
| append()            | Add items to a list           | list.append(7)         |

## Conditionals.

### Condición anidad.
 **if (condition):**
     here are the orders that are executed if the condition is true
 **elif:**
      Here the second condition
 **else:**
     and here are the orders that are executed if the condition is-.
     
Example:
```
age = int (input ("How old are you?"))
if age> = 18:
     print ("You are of legal age")
elif age <0:
     print ("You cannot be a negative age")
else:
     print ("You are a minor")
```
### Ternary conditional:
```
c = input ("Enter a number:")
r = c if (c> 50) else 0
print (r)
```
