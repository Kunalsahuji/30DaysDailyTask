// LCM : 

// a = parseInt(prompt("Enter 1st number: "))
// b = parseInt(prompt("Enter 2nd number: "))

a = 21
b = 100
maxNum = a > b ? a : b
while (true) {
    if (maxNum % a == 0 && maxNum % b == 0) {
        console.log(`LCM of ${a} and ${b} = ${maxNum}`)
        break
    }
    maxNum++
}
