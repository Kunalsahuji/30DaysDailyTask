# find a suare root of given number:
# from math import sqrt

# num = int(input("Enter number: "))
# square = sqrt(num)
# print(f"square root of {num} = {square}")
# ---------------------------------------

# def sqrt(x):
#     return x ** 0.5


# num = int(input("Enter number: "))
# print(f'sqaure root of {num} = {sqrt(num)}')
# -----------------------------------------------

# find a cube root of given number:

# from math import cbrt

# num = float(input("Enter number: "))
# cube_root = cbrt(num)
# print(f'Cube Root of {num} = {cube_root}')

# ---------------------------------------


# def cube_root(x):
#     return x ** (1 / 3)


# num = int(input("Enter number: "))
# result = cube_root(num)
# print(f"The cube root of {num} = {result}")

# ------------------------------------------

# find a power of given nuber:

# from math import pow

# num = float(input("Enter number: "))
# forpower = float(input("Enter number for power: "))
# power = pow(num, forpower)
# print(f'Power of {num} = {power}')
# --------------------------------------------


def power(base, exponent):
    return base ** exponent

base = int(input("Enter base: "))
exponent = int(input("Enter exponent: "))
print(f'{base} of power {exponent} = {power(base, exponent)}')
