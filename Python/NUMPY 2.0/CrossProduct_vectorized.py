''' Obtain the cross product of two matrix with dimension: 2x2 and 2x2'''

import numpy as np
matrix1 = np.arange(1, 5).reshape((2,2))
print('Your first matrix is:\n', matrix1)

matrix2 = np.arange(5, 9).reshape((2,2))
print('\n\nYour second matrix is:\n', matrix2)

##Multiplication cross product
result = np.cross(matrix1, matrix2)
print('\n\nThe  cross product is: \n', result)