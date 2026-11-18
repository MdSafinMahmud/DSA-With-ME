def calculate(a, b):
    return a + b, a - b


print("Enter two number: ")
sum_result, sub_result = calculate(int(input()), int(input()))
print("Sum",sum_result)
print("Sub",sub_result)
