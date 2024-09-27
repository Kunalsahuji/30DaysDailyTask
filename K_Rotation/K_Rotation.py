# Reverse the array by k rotation:


def reverseArrayKrotation(arr, start, end):
    while start < end:
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1


n = int(input("Enter number: "))
arr = list(map(int, input("Enter values: ").split()))
k = int(input("Enter rotation: "))
if k > n:
    k %= n
reverseArrayKrotation(arr, 0, n - 1)
reverseArrayKrotation(arr, 0, k - 1)
reverseArrayKrotation(arr, k, n - 1)
print(arr)
