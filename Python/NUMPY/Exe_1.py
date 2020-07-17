''' Add two matrices and extract the even numbers from the result'''

import numpy as np

a= [[1  ,-4],  [12 , 3],  [7.2, 5]]
b= [[2  ,9],  [10 , 3],  [7, 3]]

##Saving
matrix1 = np.array(a)
matrix2 = np.array(b)

print(f"Matrix 2 :\n {matrix1}\n")
print(f"Matrix 2 :\n {matrix2}\n")

##Sum
matrix3 = (matrix1 + matrix2)

print(f"The sum is :\n {matrix3}")

##Separating the even numbers
pares = matrix3[matrix3 % 2 == 0]
print(f"Los numeros pares del resultado :\n {pares}")