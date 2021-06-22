 #for  change the i (iteration value) to n we will not get any error
str="python"
for n in str:
    print(n)
"""
output:
p
y
t
h
o
n
"""
#if i place end="  " means it will print the  spaces at the end
str="python"
for n in str:
 print(n,end="  ")
"""output:p  y  t  h  o  n"""
#if we use integer in this place of 5 enterd  means we will get error
#error is
"""
Traceback (most recent call last):
    File "applications_of_for_loop.py", line 2, in <module>
          for n in 5:
TypeError: 'int' object is not iterable
"""
"""
for n in 5:
    print(i)
"""


