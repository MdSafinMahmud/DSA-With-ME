students = []

def add_student():
    try:
        student_id = int(input("Enter Student ID: "))
        name = input("Enter Student Name: ")
        age = int(input("Enter age: "))
        department = input("Enter depertment: ")

        mark1 = float(input("Enter marks for subject 1: "))
        mark2 = float(input("Enter marks for subject 2: "))
        mark3 = float(input("Enter marks for subject 3: "))

        student = {
            "id": student_id,
            "name": name,
            "age": age,
            "department": department,
            "marks": [mark1, mark2, mark3],
        }
        students.append(student)
        print("\nStudent added Successfully!")
    except ValueError:
        print("\nInvalid input! Please enter numbers where required.")


def calculate_average(marks):
    total = sum(marks)
    average = total / len(marks)
    return average


def calculate_grade(average):
    if average >= 80:
        return "A+"
    elif average >= 70:
        return "A"
    elif average >= 60:
        return "B"
    elif average >= 50:
        return "C"
    elif average >= 40:
        return "D"
    else:
        return "F"


def show_allstudents():
    if len(students) == 0:
        print("\nNo Students Available.")
        return
    print("\n----- ALL STUDENTS -----")
    for student in students:
        average = calculate_average(student["marks"])
        print("\nStudent Found!")
        print("ID:", student["id"])
        print("Name:", student["name"])
        print("Age:", student["age"])
        print("Average:", round(average))
        print("Grade:", calculate_grade(average))

        found = True
        break
    if found == False:
        print("\nStudent Not Found!")


def search_student():

    student_id = int(input("\nEnter Student ID to search: "))

    found = False

    for student in students:

        if student["id"] == student_id:

            average = calculate_average(student["marks"])

            print("\nStudent Found!")
            print("ID:", student["id"])
            print("Name:", student["name"])
            print("Age:", student["age"])
            print("Department:", student["department"])
            print("Average:", round(average, 2))
            print("Grade:", calculate_grade(average))

            found = True
            break

    if found == False:
        print("\nStudent Not Found!")


def calculate_statistics():
    if len(students) == 0:
        print("\nNo students available.")
        return
    calculate_average = []
    for student in students:
        average = calculate_average(student["marks"])
        average.append(average)
    class_average = sum(average) / len(average)
    highest_average = max(average)
    lowest_average = min(average)

    print("----- STATISTICS -----")
    print("Total Students: ", len(students))
    print("Class Average: ", round(class_average, 2))
    print("Highest Average: ", round(highest_average, 2))
    print("Lowest Average: ", round(lowest_average, 2))


def show_passed_students():

    if len(students) == 0:
        print("\nNo Students Available.")
        return
    print("\n----- PASSED STUDENTS-----")
    found = False
    for student in students:
        average = calculate_average(student(["marks"]))
        if average >= 40:
            print(student["name"], "-", round(average))
            found = True
        if found == False:
            print("No passed students.")


while True:
    print("\n")
    print("------------------------------------------")
    print("\tSTUDENT MANAGEMENT SYSTEM")
    print("------------------------------------------")
    print("1.Add Student")
    print("2.Show All Students")
    print("3.Search Student")
    print("4.Calculate Statistics")
    print("5.Show Passed Student")
    print("6.Exit")

    choice = input("\nEnter your choice: ")

    if choice == "1":
        add_student()
    elif choice == "2":
        show_allstudents()
    elif choice == "3":
        search_student()
    elif choice == "4":
        show_allstudents()
    elif choice == "5":
        show_passed_students()
    elif choice == "6":
        print("Thank you for using student management system!")
        break
    else:
        print("\nInvalid choice! Please select 1to6.Thanks!")