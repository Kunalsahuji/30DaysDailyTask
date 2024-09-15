// Factorial Number: 

// n = parseInt(prompt("Enter number: "))
n = 5
temp = n
fact = 1
while (n > 0) {
    fact *= n
    n -= 1
}
console.log(`Factorial of ${temp} = ${fact}`)

