// SPY Number : A number is said to be a SPY Number if the sum of its digits is exactly equal to the product of its digits.

// n = parseInt(prompt("Enter Number: "))
n = 1421
sum = 0
product = 1
temp = n
while (n > 0) {
    rem = n % 10
    sum += rem
    product *= rem
    n = Math.floor(n / 10)
}
if (sum == product) {
    console.log(`${temp} is a SPY Number`)
}
else {
    console.log(`${temp} is not a SPY Number`)
}
