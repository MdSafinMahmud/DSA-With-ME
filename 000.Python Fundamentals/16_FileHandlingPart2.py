# write
with open("EmployeeData.txt", "w") as file:
    file.write("Company Name: Software agency\n")
    file.write("Depertment: Software development\n")
    file.write("Sallary:2000$/month\n")
# read
with open("EmployeeData.txt", "r") as file:
    print(file.read())
# append
with open("EmployeeData.txt", "a") as file:
    file.write("Skill:Make a building without piller\n")
# read again
with open("EmployeeData.txt", "r") as file:
    print(file.read())
with open("EmployeeData.txt","w") as file:
    file.write("New Employee: Shafi Reza\n")
    file.write("Position: Civil Engineer\n")
with open("EmployeeData.txt","r") as file:
    print(file.read())