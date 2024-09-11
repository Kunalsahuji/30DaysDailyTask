# Sum of n numbers:

sum = 0
n = int(input("Enter number: "))
for i in range(n + 1):
    sum += i
print(f'Sum of {n} numbers is {sum}')