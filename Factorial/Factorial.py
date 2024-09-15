# Factorial Number:

# from math import factorial

# n = int(input("Enter number: "))
# print(f"Factorial of {n} = {factorial(n)}")

n = int(input("Enter number: "))
temp = n
fact = 1
while n > 0:
    fact *= n
    n -= 1
print(f'Factorial of {temp} = {fact}')


