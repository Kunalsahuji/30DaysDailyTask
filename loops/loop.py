# Table of n number:

# while loop:
# num = int(input("Enter number: "))
# i = 1
# while (i <= 10):
#     print(i*num)
#     i += 1
# -------------------------------

# for loop:
# n = int(input("Enter number: "))
# for i in range(n, n * 11, n):
#     print(i)
# -------------------------------

# print all the even number from 0 to n number.

# while loop:
# n = int(input("Enter number: "))
# i = 0

# while i <= n:
#     if i % 2 == 0:
#         print(f"{i} is even")
#     else:
#         print(f"{i} is odd")
#     i += 1
# -------------------------------


# for loop
n = int(input("Enter number:"))
for i in range(n + 1):
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
