# Check Grade Accourding to your marks:

try:
    num = int(input("Enter marks: "))

    if num > 100 or num < 0:
        print("Invalid marks. Please enter marks between 0 and 100.")
    elif 91 <= num <= 100:
        print(f"num = {num}. You got A+ Grade🤩✌️")
    elif 81 <= num <= 90:
        print(f"num = {num}. You got A Grade🤗🎉")
    elif 71 <= num <= 80:
        print(f"num = {num}. You got B+ Grade😍👌")
    elif 61 <= num <= 70:
        print(f"num = {num}. You got B Grade☺👋")
    elif 33 <= num <= 60:
        print(f"num = {num}. You got C Grade🙂🙆")
    else:
        print(f"num = {num}. You Failed😭🥹")
except ValueError:
    print("You entered Wrong Input😵😕")
