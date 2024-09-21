# Prime Number: A number is said to be a Prime number if it is only divisible by 1 and itself.
# 1 is not a Prime Number
# Negative numbers are not the prime numbers.
# Prime Numbers series goes like: 2, 3, 5, 7, 9, 11, 13, 17, 19, 23........


# using a flag variable:
# n = int(input("Enter number: "))
# flag = 0

# if n <= 1:
#     print(f"{n} is not a Prime Number")
# else:
#     for i in range(2, n):
#         if n % i == 0:
#             flag = 1
#             break
#     if flag:
#         print(f"{n} is not a Prime Number")
#     else:
#         print(f"{n} is a Prime Number")


# using a for... else statement:

n = int(input("Enter number: "))
if n <= 1:
    print(f"{n} is not a Prime Number")
elif n > 1:
    for i in range(2, n):
        if n % i == 0:
            print(f"{n} is not a Prime Number")
            break
    else:
        print(f"{n} is a Prime Number")
else:
    print(f"{n} is not a Prime Number")
