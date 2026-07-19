# open() funtion
# open("file_firstFile.txt","mode")
# | Mode  | Work                                   |
# | ----- | ----------------------------------------- |
# | `"r"` | Read (read file)                          |
# | `"w"` | Write (write new fil,delete old data) |
# | `"a"` | Append          |
# | `"x"` |      |
# read file
file = open("data.txt","r")
# write file
file = open("data.txt", "w")
file.write("Hello World")
file.close()
# read file
file = open("data.txt", "r")
print(file.read())
file.close()
# read line
file = open("data.txt", "r")
print(file.readline())
file.close()
# read all lines
file = open("data.txt", "r")
print(file.readlines())
file.close()
# append
file = open("data.txt", "a")
file.write("\nPython")
file.close()
# creat new file
file = open("new.txt", "x")
file.close()
# Check if File Exists
import os
if os.path.exists("data.txt"):
    print("File exists")
else:
    print("File not found")
# Delete file
import os
os.remove("data.txt")
