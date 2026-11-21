a=(int(input("Enter first number: ")))
b=(int(input("Enter second number: ")))
c=(int(input("Enter third number: ")))
if a>b and a>c:
    print("First number is greater than others numbers.")
elif b>a and b>c:
    print("Second number is greater than others numbers.")
elif c>a and c>b:
    print("Third number is greater than others numbers.")
else:
    print("PLZ enter number.")