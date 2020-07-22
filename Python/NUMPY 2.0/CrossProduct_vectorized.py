''' Obtain the cross product of two matrix with dimension: 3x1'''

import numpy as np
from time import time

##With Numpy
start_time = time()

matrix1 = [10,27,3] #[i for i in range (2)]
print('Your first matrix is:\n', matrix1)

matrix2 = [14,2,3] # [i for i in range (3)]
print('\n\nYour second matrix is:\n', matrix2)

##Multiplication cross product 
result = np.cross(matrix1, matrix2)
print('\n\nThe  cross product is: \n', result)
end_time = time()
print('\n\nTime with NUMPY', (end_time - start_time))


    #With for
start_time2 = time()
x = [10,27,3] #[i for i in range (7)]
print('\n\nYour first matrix is:\n', x)

y = [14,2,3] #[i for i in range (7)]
print('\n\nYour second matrix is:\n', y)
 
crossproduct = [x[1]*y[2] - x[2]*y[1],
                x[2]*y[0] - x[0]*y[2],
                x[0]*y[1] - x[1]*y[0]]
print('\n\nCross product is: \n', crossproduct)
end_time2 = time()
print('\n\nThe time with other fuction: ', (end_time2 - start_time2))