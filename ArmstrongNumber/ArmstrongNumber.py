# Armstrong Number: A number is said to be an Armstrong number if the sum of its digits each to the power total digit in the number is equal to the number itself.
# Ex. 1,2,3,4.....,9, 153, 1634,

n = int(input("Enter number: "))
temp = n
count = 0
while n > 0:
    n //= 10
    count += 1
n = temp
sum = 0
while n > 0:
    rem = n % 10
    sum += rem**count
    n //= 10
if sum == temp:
    print(f"{temp} is an Armstrong Number.")
else:
    print(f"{temp} is not an Armstrong Number.")
