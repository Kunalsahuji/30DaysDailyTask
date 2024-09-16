//  strong number: A number is said to be a strong number if the sum of the factorial of the digit is equal to the number itself. Ex. 1, 2, 145

const factorial = (n) => {
    let fact = 1
    for (let i = 2; i <= n; i++) {
        fact *= i
    }
    return fact
}
// let n = parseInt(prompt("Enter number: "))
let n = 145
let temp = n
sum = 0
while (n > 0) {
    sum += factorial(n % 10)
    n = Math.floor(n / 10)
}
if (sum === temp) {
    console.log(`${temp} is a Strong Number`)
}
else {
    console.log(`${temp} is not a Strong Number`)

}