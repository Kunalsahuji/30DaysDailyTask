# Find Sum of Digit:

n = int(input("Enter number: "))
temp = n
sum = 0
for i in range(n):
    rem = n % 10
    sum += rem
    n //= 10
print(f'Sum of Digit {temp} = {sum}')