// # Check wether number is Even or Odd: 

// num = parseInt(prompt("Enter number to check: "))
// if (isNaN(num)) {
//     console.log("You enter wrong input! Please enter correct number.")
// }
// else if (num % 2 == 0) {
//     console.log(`Num = ${num} is a Even Number.`)
// }
// else {
//     console.log(`Num = ${num} is a Odd Number.`)
// }


// Check given number is divisible by another number or not

Divident = parseInt(prompt("Enter Divident: "))
Divisor = parseInt(prompt("Enter Divisor: "))
if (isNaN(Divident && Divisor)) {
    console.log("You enter wrong input! Please enter correct number.")
}
else if (Divident % Divisor == 0) {
    console.log(`${Divident} is divisible by ${Divisor}.`)
}
else {
    console.log(`${Divident} is not divisible by ${Divisor}.`)
}



