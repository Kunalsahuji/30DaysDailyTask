num = parseInt(prompt("Enter number to check: "))

if (isNaN(num)) {
    console.log("Wrong input. Please try enter a valid number")

}
else if (num > 0) {
    console.log(`num = ${num} is a Positive Number.`)
}
else if (num < 0) {
    console.log(`num = ${num} is a Negative Number.`)
}
else {
    console.log(`num = ${num} is a Zero.`)
}
