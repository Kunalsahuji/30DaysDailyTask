//  Find Sum of Digit:

// n = parseInt(prompt("Enter number: "))
n = 10
temp = n
sum = 0
while (n > 0) {
    sum += n % 10
    n = Math.floor(n / 10)
}
console.log(`The sum of ${temp} = ${sum}`)

