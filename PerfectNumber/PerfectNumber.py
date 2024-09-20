# WAP that check given number is Perfect or not.

n = int(input("Enter number: "))
sum = 0
for i in range(1, n // 2 + 1):
    if n % i == 0:
        sum += i
if sum == n:
    print(f"{n} is a Perfect Number")
else:
    print(f"{n} is not a Perfect Number")
