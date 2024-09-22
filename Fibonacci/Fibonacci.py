# Fibonacci Number:

n = int(input("Enter number:"))
n2 = 1
n1 = 0
if n == 0:
    print(f"{n}th prime number is : 0")
elif n == 1:
    print(f"{n}th prime number series is : 0, 1")
else:
    print(f"{n}th prime number series is : 0, 1", end=" ")
    n -= 2
    while n != 0:
        n3 = n1 + n2
        print(n3, end=" ")
        n1, n2 = n2, n3
        n -= 1
