# Find Repeating element in array:
n = int(input("Enter number: "))
arr = list(map(int, input("Enter values: ").split()))
d = {}
for i in arr:
    if i in d:
        d[i] += 1
    else:
        d[i] = 1

print("Repeating elements are: ", end="")
for k, v in d.items():
    if v > 1:
        print(k, end=" ")
