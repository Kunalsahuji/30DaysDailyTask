# Largest Element in the array:

n = int(input("Enter number: "))
arr = list(map(int, input("Enter values: ").split()))
maximum = arr[0]
for i in range(1, n):
    if arr[i] > maximum:
        maximum = arr[i]
print(f"Largest Element in the Array is : {maximum}")
