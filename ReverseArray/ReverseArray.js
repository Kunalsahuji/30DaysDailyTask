// Reverse Array:

function ReverseArray(n, arr) {
    start = 0
    end = n - 1
    while (start < end) {
        [arr[start], arr[end]] = [arr[end], arr[start]]
        start++
        end--
    }
    process.stdout.write(`ReverseArray = [${arr}] `)
}

// n = parseInt(prompt("Enter number: "))
// arr = prompt("Enter values: ").split(", ").map(Number)
n = 5
arr = [1, 2, 3, 4, 5, 6]
process.stdout.write(`Array = [${arr}] `)
ReverseArray(n, arr)
