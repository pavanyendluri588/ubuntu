open("file.txt","r")
#opening the file in the read mode. if the file soes not exit then the python interpeter will  show errer
"""
error type:
Traceback (most recent call last):
  File "opening_file_and_closing_file.py", line 1, in <module>
    open("file.txt","r")
FileNotFoundError: [Errno 2] No such file or directory: 'file.txt'
"""


open("file.txt","w")
#opening the file in the write mode .is the file does not exist then the  python interpetor  will automatically creates file


open("file.txt","a")
 #opening the file in the append mode .is the file does not exist then the  python interpetor  will automatically creates file



open("file.txt","x")
#opening the file in the write mode .is the file does not exist then the  python interpetor  will automatically creates file  
