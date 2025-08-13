# swap 3 numbers

# a = int(input("Enter 1st number: "))
# b = int(input("Enter 2nd number: "))
# c = int(input("Enter 3rd number: "))
# a = a + b + c
# b = a - b - c
# c = a - b - c
# a = a - b - c
# print(f"a= {a}, b = {b}, c = {c}")

# -------------------------------------------------------------------------

# Sum of all natural numbers upto n via for loop:
# n = int(input("Enter number: "))
# sum = 0
# for i in range(n + 1):
#     sum += i
# print(sum)

# -------------------------------------------------------------------------

# Sum of all natural numbers upto n via while loop:
# n = int(input("Enter number: "))
# sum = 0
# while n > 0:
#     sum += n
#     n -= 1
# print(sum)

# -------------------------------------------------------------------------

# Sum of all natural numbers upto n via formula:
# n = int(input("Enter number: "))
# print(f" sum of all natural number = {n*(n+1)/2}")

# -------------------------------------------------------------------------

# sum of digit
# n = int(input("Enter number: "))
# sum = 0
# temp = n
# while n > 0:
#     sum += n % 10
#     n //= 10
# print(f"sum of {temp} = {sum}")

# -------------------------------------------------------------------------

# reverse the digit

# n = int(input("Enter number: "))
# rev = 0
# temp = n
# while n > 0:
#     rev = (rev * 10) + n % 10
#     n //= 10
# print(f"Reverse of {temp} = {rev}")

# -------------------------------------------------------------------------

"""
# Palindrome Number
n = int(input("Enter number: "))
sum = 0
temp = n
while n > 0:
    sum = sum * 10 + n % 10
    n //= 10
if temp == sum:
    print(f"{temp} is a Palindrome Number")
else:
    print(f"{temp} is not a Palindrome Number")
"""

# -------------------------------------------------------------------------

# Armstrong number:
"""
n = int(input("Enter number: "))
count = 0
sum = 0
temp = n
while n > 0:
    n //= 10
    count += 1
n = temp
while n > 0:
    rem = n % 10
    sum += rem**count
    n //= 10
if temp == sum:
    print(f"{temp} is an Armstrong Number")
else:
    print(f"{temp} is not an Armstrong Number")
"""
# -------------------------------------------------------------------------

# Strong number : like 1, 2, 145

"""
def factorial(n):
    fact = 1
    while n > 0:
        fact *= n
        n -= 1
    return fact


n = 145
temp = n
sum = 0
while n > 0:
    rem = n % 10
    sum += factorial(rem)
    n//=10
if temp == sum:
    print(f"{temp} is a Strong number")
else:
    print(f"{temp} is not a Strong Number")
"""
# -----------------------------------------------------------------
"""
# Perfect Number : 28: 1+2+4+7+14 = 28 (sum of factor)

n = 28
sum = 0
for i in range(1, n // 2 + 1, 1):
    if n % i == 0:
        sum += i
if sum == n:
    print("perfect")
else:
    print("not perfect")
"""
# -------------------------------------------------------------------------
"""
# Prime Number:
flag = 0
n = 110
if n <= 1:
    print(f"{n} is not a prime number")
elif n > 1:
    for i in range(2, n):
        if n % i == 0:
            flag = 1
            break
    if flag:
        print(f"{n} is not a Prime Number")
    else:
        print(f"{n} is a Prime Number")
"""

# -------------------------------------------------------------------------
"""
# Fibonacci Series:
n = 8
n1 = 0
n2 = 1
if n == 0:
    print(f"{n}th series of febonacci number is : 0")
elif n == 1:
    print(f"{n}th series of febonacci number is : 0, 1")
else:
    print(f"{n}th series of febonacci number is : 0 1", end=" ")
    n -= 2
    while n != 0:
        n3 = n1 + n2
        print(n3, end=" ")
        n1, n2 = n2, n3
        n -= 1
"""
n = 10
n1 = 0
n2 = 1
if n == 0:
    print("0")
elif n == 1:
    print("0 1")
else:
    print("0, 1", end="")
    n -= 2
    while n > 0:
        n3 = n1 + n2
        print(",", n3, end="")
        n1, n2 = n2, n3
        n -= 1
