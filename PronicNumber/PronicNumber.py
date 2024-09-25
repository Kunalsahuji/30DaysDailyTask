#  Pronic Number : It is also known as an Oblong number, is a type of natural number that is the product of two consecutive integers
# Mathematically, a pronic number can be represented as : n(n+1)  ==> 3(3+4) = 12

flag = False
n = int(input("Enter number: "))
for i in range(n):
    if i * (i + 1) == n:
        flag = True
        break
if flag:
    print(f"{n} is Pronic Number")
else:
    print(f"{n} is not Pronic Number")
