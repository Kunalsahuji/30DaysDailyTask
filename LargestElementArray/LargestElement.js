// Largest Element in the Array: 

// n = parseInt(prompt("Enter number: "))
// arr = prompt("Enter values: ").split(' ').map(Number)

n = 5
arr = [100, 28687, 9879, 9873, 10]

maximum = arr[0]
for (let i = 0; i < n; i++) {
    if (arr[i] > maximum) {
        maximum = arr[i]
    }
}
console.log(`Largest Element in the Array is: ${maximum}`)