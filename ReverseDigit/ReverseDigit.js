// Reverse a number: 

// n = parseInt(prompt("Enter number: "))
n = 12345
reverse = 0
temp = n
while (n > 0) {
    reverse = reverse * 10 + n % 10
    n = Math.floor(n / 10)
}
console.log(`Number: ${temp} Reversed Number: ${reverse}`)