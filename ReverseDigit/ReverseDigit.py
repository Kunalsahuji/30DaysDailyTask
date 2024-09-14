# Reverse a number:

n = int(input("Enter number: "))
reverse = 0
temp = n
while n > 0:
    reverse = reverse * 10 + n % 10
    n //= 10
print(f"Number: {temp} Reversed Number: {reverse}")
