##DESCRIPTION: Write a program to copy a file, expanding all tabs to multiple spaces.

from io import open

##Creating the files with a initial line text

fichero1=open('archivo1.txt','w') ##writing
fichero1.write(str(input("Enter message to archivo1:\n\t"))) ##input and writing in the file
fichero1.close() 


#### Obtaining what is in each line of each file######

fichero1=open('archivo1.txt','r')##reding
linea11 = fichero1.readlines() ## returns a list containing each line in the file as a list item
fichero1.close() 

############Exchanging tabs for spaces##############################
mess = str(linea11[0])
print(mess)
new_mess = mess.replace("\t"," ") ##function to replace the tab 

print(f'final mess: {new_mess}')
##### Escribing exchanged line#########
fichero2=open('archivo2.txt','w')
fichero2.write(new_mess) 
fichero2.close()