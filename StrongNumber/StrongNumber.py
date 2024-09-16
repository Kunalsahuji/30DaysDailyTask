# strong number: A number is said to be a strong number if the sum of the factorial of the digit is equal to the number itself. Ex. 1, 2, 145

from math import factorial

n = int(input("Enter number: "))
fact = 1
temp = n
sum = 0
while n > 0:
    sum += factorial(n % 10)
    n //= 10
if sum == temp:
    print(f"{temp} is a Strong Number.")
else:
    print(f"{temp} is not a Strong Number.")
