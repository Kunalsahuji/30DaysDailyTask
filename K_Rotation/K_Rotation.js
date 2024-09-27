// Reverse the array by k rotation:
function ReverseArrayKrotation(arr, start, end) {
    while (start < end) {
        [arr[start], arr[end]] = [arr[end], arr[start]]
        start++
        end--
    }
}

// n = parseInt(prompt("Enter number: "))
// arr = prompt("Enter number").split(" , ").map(Number)
// k = parseInt(prompt("Enter rotation: "))

n = 5
arr = [1, 2, 3, 4, 5]
k = 3
if (k > n) {
    k %= n
}
ReverseArrayKrotation(arr, 0, n - 1)
ReverseArrayKrotation(arr, 0, k - 1)
ReverseArrayKrotation(arr, k, n - 1)
console.log(arr)