# find that number is Even or Odd

# try:
#     num = int(input("Enter number to check: "))
#     if num % 2 == 0:
#         print(f"num = {num} is Even Number.")
#     else:
#         print(f"num = {num} is Odd Number.")
# except ValueError:
#     print("You entered wrong Input. Please enter correct number.")


# fid out that number is divisible by another number or not.

try:
    Divident = int(input("Enter Divident: "))
    Divisor = int(input("Enter Divisor: "))
    if Divident % Divisor == 0:
        print(f"{Divident} is Divisible by {Divisor}.")
    else:
        print(f"{Divident} is not Divisible by {Divisor}.")

except ValueError:
    print("You entered wrong input! Please enter correct input.")
