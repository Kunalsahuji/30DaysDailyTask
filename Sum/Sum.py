# Sum of n numbers:

sum = 0
n = int(input("Enter number: "))
for i in range(n + 1):
    sum += i
print(f"Sum of {n} numbers is {sum}")


# Sum of square:

sum = 0
n = int(input("Enter number: "))
for i in range(n + 1):
    sum += i * i
    print(f"sqaure of {i} = {i*i} and sum = {sum}")
print(f"Sum of sqaure of {n} square  numbers is {sum}")

# Sum of cubes:

sum = 0
n = int(input("Enter number: "))
for i in range(n + 1):
    sum += i * i * i
    print(f"cube of {i} = {i*i*i} and sum = {sum}")
print(f"Sum of sqaure of {n} cube  numbers is {sum}")
