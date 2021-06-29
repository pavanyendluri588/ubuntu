
"""
print("hi
i
am
pavan")
  File "escape_sequences_in_print_function.py", line 1
    print("hi
            ^
SyntaxError: EOL while scanning string literal
without backslash the print statement will give syntax error
"""

#"\"  ignores  the new line:
print("hi\
i\
am\
pavan")

#"\\" will print "\"

#" \" " will print ' " '


#"\a" will  make sound
print("\a")


#"\t" will print the horizontal tab
print("pavan \t  ram \t  chandar")
"""
output:
pavan     ram     chandar 
"""


#"\v" will print the vertical tab
print("pavan \v  ram \v  chandar")
"""
output:
pavan ram
chandar
"""
#" \b " is used for the backspace
print("pavan  \b ram  \b chandar ")
"""
output:
pavan ram chandar
"""

#" \n " is used for  take new line
print("pavan \n ram\n chandar")
"""
output:
pavan
 ram
 chandar
"""



#ASCII Carriege Return(CR) will only consider the last \r it will print the  what is right side of that
print("i \r am \r  pavan \r ram \r chandar")
"""
output:
chandar
"""
#/000 character with  octal value
print("\110\145\154\154\157")
"""
output:
hello
"""

#\xHH character with hex value
print("\x48\x65\x6c\x6c\x6f")
"""
output:
hello
"""
