''' Obtain the dot product of two matrix with dimension: 4x3 and 3x4'''

import numpy as np
matrix1 = np.arange(1, 13).reshape((4,3))
print('Your first matrix is:\n', matrix1)

matrix2 = np.arange(5, 17).reshape((3,4))
print('\n\nYour second matrix is:\n', matrix2)

##Multiplication dot product
result = matrix1.dot(matrix2)
print('\n\nThe dot product is: \n', result)