// Find given number is perfect number or not

// n = parseInt(prompt("Enter number: "))
n = 282
sum = 0
for (let i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
        sum += i
    }
}
if (sum == n) {
    console.log(`${n} is a Perfect number`)
}
else {
    console.log(`${n} is not a Perfect number`)
}