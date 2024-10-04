# Maximum subarray sum (Kadane's Problem):


def MaxSubArraySum(n, arr):
    maxSum = float("-inf")  
    sums = 0
    for i in range(n):
        sums += arr[i]
        if sums > maxSum:
            maxSum = sums
        if sums < 0:
            sums = 0  
    return maxSum


n = int(input("Enter number: "))
arr = list(map(int, input("Enter values: ").split()))
x = MaxSubArraySum(n, arr)
print(x)
