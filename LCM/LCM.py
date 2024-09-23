# LCM:
a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
if a > b:
    maxNum = a
else:
    maxNum = b
i = maxNum
while i:
    if maxNum % a == 0 and maxNum % b == 0:
        print(f"LCM of {a} and {b} is {maxNum}")
        break
    maxNum += i
