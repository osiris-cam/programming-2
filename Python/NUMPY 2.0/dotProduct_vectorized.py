''' Obtain the dot product of two matrix with dimension: 1 x 1 with 33 elements

'''
#'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''#
import numpy as np
from time import time
    #With for
start_time2 = time()
x = [i for i in range (34)]
print('\n\nYour first matrix is:\n', x)

y = [i for i in range (34)]
print('\n\nYour second matrix is:\n', y)
 

dotproduct=0
for i,j  in zip (x,y):
    dotproduct += i*j
print('\n\nDot product is: \n', dotproduct)
end_time2 = time()
print('The time with for', (end_time2 - start_time2)) #0.018921375274658203

#-----------------------------------------------------------------------#
##With NUMPY

start_time = time()
matrix1 = [i for i in range (34)]
print('Your first matrix is:\n', matrix1)

matrix2 = [i for i in range (34)]
print('\n\nYour second matrix is:\n', matrix2)

#Multiplication dot product
result = np.dot(matrix1, matrix2)
print('\n\nThe dot product is: \n', result)
end_time = time()
print('The time with NUMPY', (end_time - start_time)) #0.0039577484130859375
