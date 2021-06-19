"""
#passing immutable  onject(list)
def function(list1):
     return list1
list2-[10,[345,345,354.345,"apple"],35,"pavan"]
print("the list inside function:",function(list2))
print("the list outside of function:",list2)
"""
#passing mutable object(string)
def function(string1):
      print("this function will get string1 value of function")
     return string1

string2=str(input("enter the string:"))
print("the string inside the function:",function(string2))
print("the value of the string2",string2)
