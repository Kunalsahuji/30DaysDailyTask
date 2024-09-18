#  Write a program to input a number and find whether the number is a Disarium number or not:
#   A number is said to be Disarium if sum of its digits powered with their respective positions is equal to the number itself.
#   Sample Input: 135  Sample Output: 135 ⇒ 1 1 + 3 2 + 5 3 = 135 So, 135 is a Disarium number.

n = int(input("Enter number: "))
count = 0
temp = n
while n > 0:
    n //= 10
    count += 1
n = temp
sum = 0
while n > 0:
    rem = n % 10
    sum += rem**count
    count -= 1
    n //= 10
if temp == sum:
    print(f"{temp} is a Disarium Number")
else:
    print(f"{temp} is not a Disarium Number")
