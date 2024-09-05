a = parseInt(prompt("Enter first number: "))
b = parseInt(prompt("Enter second number: "))
c = parseInt(prompt("Enter third number: "))

if (a == b && a == c) {
    console.log(`All numbers are equal. a = ${a}, b = ${b}, c = ${c}`)
}
else if (a == b && a > c) {
    console.log(`both numbers are equal and largest. a = ${a}, b = ${b}`)
}
else if (a == c && a > b) {
    console.log(`both numbers are equal and largest. a = ${a}, c = ${c}`)
}
else if (b == c && b > a) {
    console.log(`both numbers are equal and largest. b = ${b}, c = ${c}`)
}
else if (a > b && a > c) {
    console.log(`a = ${a} is the largest number.`)
}
else if (b > a && b > c) {
    console.log(`b = ${b} is the largest number.`)
}
else {
    console.log(`c = ${c} is the largest number.`)

}