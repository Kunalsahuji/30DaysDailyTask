# WAP to check whether the given year is a Leap Year
try:
    year = int(input("Enter a valid year: "))
    if (year % 400 == 0) or ((year % 4 == 0) and (year % 100 != 0)):
        print(f"{year} is a Leap Year.")
    else:
        print(f"{year} is not a Leap Year.")
except ValueError:
    print("Invalid input. Please enter a valid year as an integer.")
