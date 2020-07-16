
'' 'Given a list of names, print alphabetical order and reverse alphabetical order' ''

def print_names(names, note):
    print(note) #We print the first inpt and after the names of the people. Finalle the second input and after the names.
    for names in names:
        print(names)

names = [   'Sheilly', 
            'Katherine',
            'Olivia', 
            'Eleazar',
            'Alondra']


names.sort() #We order the names in the normal way
print_names(names, "\tNames in alphabetical order\n") #first input


names.sort(reverse=True) #Function to put in order alphabetical but in reverse
print_names(names, "\n\tNames in reverse alphabetical order") #Second input