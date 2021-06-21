


file=open("testingfile.txt","r")
#if the file doest not exist in read mode the it gives the error
"""
error type:
Traceback (most recent call last):
  File "opening_file_and_closing_file.py", line 1, in <module>
    file=open("testingfile.txt","r")
FileNotFoundError: [Errno 2] No such file or directory: 'testingfile.txt'
"""
file.close()


"""
file=open("testfile.txt","w")
#tf the file  doesnot exist in write mode .the python interpeter will create file  automatically

#print(file.read())
#this  statement is used to  print the file contents

#print(file.read(6))
#this statement id used to print the first 6 characters  prtsent in the file


if file:
    print("sucessfully filoe is opened  ")
#if statement is used to  check if the file is opned  or not opened

file.close()
"""
