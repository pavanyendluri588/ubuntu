"""
range(size,stop,step-size)
size-starting number
stop-ending number
step-size=The step size is used to skip the specific numbers from the iteration. It is optional to use. By default, the step size is 1. It is optional.



"""
print("printing the odd numbers in range ending number")
n=int(input("enter the number:"))
for i in range(1,n,2):
    print(i,"   ")

print("printing the even numbers in range ending number")
n=int(input("enter the number:"))
for i in range(2,n,2):
    print(i,"   ")


#by using  end=" " the print function will not go to new line
print("printing the odd numbers in range ending number")
n=int(input("enter the number:"))
for i in range(1,n,2):
     print(i,end=" ")
print("printing the even numbers in range ending number")
n=int(input("enter the number:"))
for i in range(2,n,2):
    print(i,end=" ")
