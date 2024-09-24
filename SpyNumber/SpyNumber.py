# SPY Number : A number is said to be a SPY Number if the sum of its digits is exactly equal to the product of its digits.

n = int(input("Enter number: "))
sum = 0
product = 1
temp = n
while n > 0:
    rem = n % 10
    sum += rem
    product *= rem
    n //= 10
if sum == product:
    print(f"{temp} is a SPY Number")
else:
    print(f"{temp} is not a SPY Number")
