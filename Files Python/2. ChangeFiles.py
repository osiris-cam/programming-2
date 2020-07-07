##	DESCRIPTION:
##	Python program to copy contents of one file to another.

from io import open


##Creating the files with an initial line text
fichero1=open('file1.txt','w')
fichero1.write(str(input("Enter message to file1:\n\t")))   
fichero1.close() 

fichero2=open('file2.txt','w')
fichero2.write(str(input("Enter message to file2:\n\t"))) 
fichero2.close()
###########################################

#### Obtaining what is in each line of each file######
fichero1=open('file1.txt','r')
linea11 = fichero1.readlines() ##returns a list containing each line in the file as a list item
fichero1.close() 

fichero2=open('file2.txt','r')
linea21 = fichero2.readlines()
fichero2.close() 



##### Writing swapped line #########
fichero1=open('file1.txt','a') ##add to the end of this file
fichero1.write("\n"+linea21[0]) ##from file 2 pass line 1 (0) to file 1
fichero1.close() 

fichero2=open('file2.txt','a') ##from file 1 pass line 1(0) to file 2
fichero2.write("\n"+linea11[0]) 
fichero2.close()