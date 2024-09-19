# WAP to find sum of factors and factorial too.

n = int(input("Enter number: "))
sum = 0
fact = 1
j = []
for i in range(1, n + 1):
    if n % i == 0:
        sum += i
        j.append(i)
    fact *= i
print(f"Factorial of {n} = {fact}\nFactor of {n} = {j} & sum of Factors = {sum}")
