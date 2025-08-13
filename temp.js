/*
// sum of natural number:
{
let n = 10 //parseInt(prompt("Enter number: "))
let sum = 0
let temp = n
while (n > 0) {
    sum += n
    n--
}
console.log(`sum of all natural number upto ${temp} = ${sum}`)
}
*/

// ---------------------------------------------------------------------

// sum of digits
/*
{
    let n = 1234
    let sum = 0
    let temp = n
    while (n > 0) {
        sum += n % 10
        n = Math.floor(n / 10)
    }
    console.log(`sum of ${temp} = ${sum}`)
}
*/

// ---------------------------------------------------------------------

/*
// reverse the digit
{
let n = 12301
let rev = 0
let temp = n
while (n > 0) {
    rev = rev * 10 + n % 10
    n = Math.floor(n / 10)
}
console.log(`Reverse of ${temp} = ${rev}`)
}
*/

// ---------------------------------------------------------------------


//Palindrome Number
/*
{
    let n = 12301
    let rev = 0
    let temp = n
    while (n > 0) {
        rev = rev * 10 + n % 10
        n = Math.floor(n / 10)
    }
    console.log(`Reverse of ${temp} = ${rev}`)
}
*/

// ---------------------------------------------------------------------

/*
// Armstrong Number
{
    let n = 1634
    let count = 0
    let temp = n
    let sum = 0
    while (n > 0) {
        n = Math.floor(n / 10)
        count++
    }
    n = temp
    while (n > 0) {
        let rem = n % 10
        sum += rem ** count
        n = Math.floor(n / 10)
    }
    if (temp === sum) {
        console.log(`${temp} is an Armstrong Number`)
    } else {
        console.log(`${temp} is not an Armstrong Number`)
    }
}
*/

// ---------------------------------------------------------------------

/*
// factorial of a number
{
    let n = 10
    let fact = 1
    let temp = n
    while (n > 0) {
        fact *= n
        n--
    }
    console.log(`factorial of ${temp} = ${fact}`)
}
*/

// ---------------------------------------------------------------------
/*
{
    // Strong number: 145 : 1! + 4! + 5! = 1 + 24 + 120 + 145
    const factorial = (n) => {
        let fact = 1
        while (n > 0) {
            fact *= n
            n--
        }
        return fact
    }

    let n = 145
    let sum = 0
    let temp = n
    while (n > 0) {
        let rem = n % 10
        sum += factorial(rem)
        n = Math.floor(n / 10)
    }
    if (temp == sum) {
        console.log(`${temp} is a Strong Number`)
    } else {
        console.log(`${temp} is not a Strong Number`)
    }
}
*/

// ---------------------------------------------------------------------
/*
{
    //  Perfect Number : 28: 1+2+4+7+14 = 28 (sum of factor)
    let n = 28
    let sum = 0
    for (let i = 1; i < Math.floor(n / 2) + 1; i++) {
        if (n % i === 0) {
            sum += i
        }
    }
    if (sum == n) {
        console.log(`${n} is a Perfect Number`)
    } else {
        console.log(`${n} is not a Perfect Number`)
    }
}
*/

// ---------------------------------------------------------------------

/*
// Prime Number

{
    let flag = 0
    let n = 130
    if (n <= 1) {
        console.log(`${n} is not a Prime Number`)
    }
    else if (n > 1) {
        for (let i = 2; i < n; i++) {
            if (n % i === 0) {
                flag = 1
                break
            }
        }
        if (flag) {
            console.log(`${n} is not a Prime Number`)
        } else {
            console.log(`${n} is a Prime Number`)
        }
    }
}
*/

// ---------------------------------------------------------------------
/*
{
    // Fibonacci Series:
    let n = 12
    let n1 = 0
    let n2 = 1
    if (n == 0) {
        console.log(`${n}th series of fibonacci number is : 0`)
    } else if (n == 1) {
        console.log(`${n}th series of fibonacci number is : 0 1`)
    }
    else {
        process.stdout.write(`${n}th Fibonacci number series is: 0, 1`)
        n -= 2
        while (n > 0) {
            let n3 = n1 + n2
            process.stdout.write(`, ${n3}`)
            n1 = n2
            n2 = n3
            n--
        }
        console.log()
    }

}
*/

// ---------------------------------------------------------------------
// {
//     n = 10
//     n1 = 0
//     n2 = 1
//     if (n === 0) {
//         console.log('0')
//     } else if (n === 1) {
//         console.log('0, 1')
//     } else {
//         process.stdout.write('0, 1')
//         n -= 2
//         while (n > 0) {
//             n3 = n1 + n2
//             process.stdout.write(`, ${n3}`)
//             n1 = n2
//             n2 = n3
//             n--
//         }
//     }
// }
