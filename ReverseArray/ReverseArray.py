# Reverse Array:


def ReverseArray(n, arr):
    start = 0
    end = n - 1
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1
    print(f"ReverseArray = {arr}", end=" ")


n = int(input("Enter number: "))
arr = list(map(int, input("Enter values: ").split()))
print(f"array = {arr}", end=" ")
ReverseArray(n, arr)
