def remove_duplicates(arr):
    return list(dict.fromkeys(arr))

# Example
arr = [1, 1, 2, 3, 3, 4, 4, 5]
print(remove_duplicates(arr))
