
'' 'Add each number in the list with variable b = 2 and variable c = 3. Then print on screen '' '

def function_a(num): # Each element enter in this function 
    b = 2
    ope = int(num + b) # Operation sum
    print ("Result of number {} + {}= {}".format(num, b, ope)) #output

def function_b(num): # Each element enter in this function 
    c = 3
    ope2 = int(num + c) #Operation sum
    print ("Result of number {} + {} = {}\n".format(num, c, ope2)) #output

numbers =[1, 2, 3, 4, 5, 6] # My initial list

for number in numbers: # Pass in each element of my list
    function_a(number) ##to the function a
    function_b(number) #to the function b
