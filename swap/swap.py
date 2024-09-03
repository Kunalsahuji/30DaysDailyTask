a = int(input("Enter 1st number: "))
b = int(input("Enter 2nd number: "))
c = int(input("Enter 3rd number: "))
print(f'before swapping:\na = {a}\nb = {b}\nc = {c}')
a = a + b + c
b = a - b - c
c = a - b - c
a = a - b - c
print(f'after swapping:\na = {a}\nb = {b}\nc = {c}')
