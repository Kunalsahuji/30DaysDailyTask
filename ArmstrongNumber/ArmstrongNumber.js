//  Armstrong Number: A number is said to be an Armstrong number if the sum of its digits each to the power total digit in the number is equal to the number itself.
//  Ex. 1,2,3,4.....,9, 153, 1634,

// n = parseInt(prompt("Enter number: "))
n = 153
temp = n
count = 0
while (n > 0) {
    n = Math.floor(n / 10)
    count += 1
}
n = temp
sum = 0
while (n > 0) {
    rem = n % 10
    sum += rem ** count
    n = Math.floor(n / 10)
}
if (temp == sum) {
    console.log(`${temp} is an Armstrong Number`)
}
else {
    console.log(`${temp} is not an Armstrong Number`)

}