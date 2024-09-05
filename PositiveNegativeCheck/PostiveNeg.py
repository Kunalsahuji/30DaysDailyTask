# Check number is Positive or Negative:
# num = int(input("Enter number to check: "))
# if num > 0:
#     print(f'num = {num} is Positive Number.')
# elif num < 0:
#     print(f'num = {num} is Negative Number.')
# elif num == 0:
#     print(f'num = {num} is a Zero.')
# else:
#     print(f'num = {num} is a Wrong Input')


try:
    num = int(input("Enter number to check: "))
    if num > 0:
        print(f'num = {num} is a Positive Number.')
    elif num < 0:
        print(f'num = {num} is a Negative Number.')
    else:
        print(f'num = {num} is Zero.')
except ValueError:
    print("Wrong Input. Please enter a valid number.")

