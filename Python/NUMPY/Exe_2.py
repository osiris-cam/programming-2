''' Calculate cross product and product element by element, only with matrices with positive numbers'''

import numpy as np

a= [[-1  ,7],  [-12 , 3],  [2, -5]]
b= [[2  ,9],  [10 , 3],  [7, 3]]

##Saving
matrix1 = np.absolute(a)
matrix2 = np.array(b)

#CROSS PRODUCT
cross = np.cross(matrix1,matrix2)
print(f"Cross product :\n {cross}\n")
#MATRIX PRODUCT
matr = np.multiply(matrix1,matrix2)
print(f"Matrix product :\n {matr}")


#Intersection between the two products
inter = np.intersect1d(cross, matr)
print(f"\nLa interseccion :\n {inter}")

