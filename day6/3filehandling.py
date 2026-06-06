# file handling in python allow you to read, write, append and modify the file stored on your system

# "r" = read or error if file doesn't exist
# with open("data.txt", "w") as f:
    # f.write("Hello")
    
# "w" = write or create if file doesn't exist
# with open("data.txt", "r") as f:
    # print(f.read())
    
with open("data.txt", "w") as f:
    f.write("Hello")

file = open("data.txt", "r")
content = file.read()
print(content)
file.close()
# ------------------------------------------------
with open("data.txt", "a") as f:
    f.write(" world")
    
file = open("data.txt", "r")
content = file.read()
print(content)
file.close()

# -------------------------------------read and write both using r+
with open("data.txt", "r+") as f:
    print(f.read())
    f.write(" with a smile")
    
# --------------------------------------count 
with open("poem.txt", "w") as f:
    f.write("jhonny jhonny yes papa")
    
with open("poem.txt", "r") as f:
    poem = f.read()
count = 0
for letter in poem:
    if letter != " ":
        count += 1

print(count)

# --------------------------------------string count
with open("string.txt", "w") as f:
    f.write("satyam")
    
with open("string.txt", "r") as f:
    string = f.read()
    
count = 0
for letter in string:
    if letter != " ":
        count += 1
    
print(count)

#-----------------------------------------------line count
# with open("code.txt", "w") as f:
    

# -------------------------------------------------file remove
import os
if os.path.exists("string.txt"):
    os.remove("string.txt")
    print("file deleted")
else:
    print("file not found")