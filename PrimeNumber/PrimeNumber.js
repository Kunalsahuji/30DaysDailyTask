// Prime Number: A number is said to be a Prime number if it is only divisible by 1 and itself.
// 1 is not a Prime Number
// Negative numbers are not the prime numbers.
// Prime Numbers series goes like: 2, 3, 5, 7, 9, 11, 13, 17, 19, 23........

// n = parseInt(prompt("Enter number: "))
n = 2000
flag = 0
if (n <= 1) {
    console.log(`${n} is not a prime number`)
}
else {
    for (let i = 2; i <= n; i++) {
        if (n % i == 0) {
            flag = 1
            break
        }
    }
    if (flag) {
        console.log(`${n} is not a prime number`)
    }
    else {
        console.log(`${n} is a prime number`)
    }
}