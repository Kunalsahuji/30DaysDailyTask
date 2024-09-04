# Find out Largest number amoung 3 numbers.
# a = int(input("Enter the first number: "))
# b = int(input("Enter the second number: "))
# c = int(input("Enter the third number: "))

# if a >= b and a >= c:
#     print("The largest number is:", a)
# elif b >= a and b >= c:
#     print("The largest number is:", b)
# else:
#     print("The largest number is:", c)
 
  
# --------------------------------

# Find out Largest number amoung 3 numbers.
   
a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
c = int(input("Enter 3rd number: "))

if a == b == c:
    print(f'All numbers are equal. a = {a}, b = {b}, c = {c}')
elif a == b and a > c:
    print(f'Both numbers are equal and largest: a = {a}, b = {b}')
elif a == c and a > b:
    print(f'Both numbers are equal and largest: a = {a}, c = {c}')
elif b == c and b > a:
    print(f'Both numbers are equal and largest: b = {b}, c = {c}')
elif a > b and a> c:
    print(f'a = {a} is the largest number')
elif b > a and b > c:
    print(f'b = {b} is the largest number')
else: 
    print(f'c = {c} is the largest number')