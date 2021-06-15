"""
Trying to access indexes other than these will raise an IndexError.
 The index must be an integer. We can't use float or other types, this will result in TypeError.



"""
my_list=[1,"pavan",78.89]
print(my_list[1])
print(my_list[2])

#this statement will give  indexerror
#print(my_list[3])
#print(my_list[4])

#this statement will give  typeerror
#print(my_list[78.8])
#print(my_list[f])

#nestedlist
n_list=["hello",[1,2,3,4,5]]
print(n_list[0])
print(n_list[0][1])
print(n_list[0][3])
print(n_list[1])
print(n_list[1][2])

#negativeindexing
print(n_list[1][-2])
print(n_list[1][-1])
print(n_list[1][-3])

# List slicing in Python

my_ist = ['p','r','o','g','r','a','m','','p','a','v','a','n']
print(my_ist[:])
print(" elements 3rd to 5th")
print(my_ist[2:5])

print(" elements beginning to 4th")
print(my_ist[:-5])

print("elements 6th to end")
print(my_ist[5:])

print("elements beginning to end")
print(my_ist[:])
