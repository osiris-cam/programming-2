##DESCRIPTION: Write a program that reads a file containing a list of numbers, and then writes two files, 
##one with all numbers divisible by three and another containing all the other numbers.

from io import open

##Creating the files with a initial line text

string_ = str(input("Enter a list:\n"))
list = string_.split(',') ##when the user is writing needs to add ","


byThree = [i for i in list if((int(i)%3==0))] ##List comprehension to check if each element  is divisible by 3##
mess1 = " ".join(byThree) ##eturns a string by joining all the elements of an iterable. Save in the variable

noThree = [i for i in list if((int(i)%3!=0))] ##List comprehension to check other numbers##
mess2 = " ".join(noThree) ##eturns a string by joining all the elements of an iterable. Save in the variable 

##Open new txt to add
fichero1=open('three.txt','w') 
fichero1.write(mess1) ##pass the content of mess1
fichero1.close() 

fichero2=open('nothree.txt','w')
fichero2.write(mess2) ##pass the content of mess1
fichero2.close()