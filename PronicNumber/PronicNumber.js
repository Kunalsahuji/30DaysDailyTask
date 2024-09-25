//  Pronic Number : It is also known as an Oblong number, is a type of natural number that is the product of two consecutive integers
// Mathematically, a pronic number can be represented as : n(n+1) ==> 3(3+4) = 12

flag = false
// n = parseInt(prompt("Enter number: "))
n = 31
for (let i = 1; i <= n; i++) {
    if (i * (i + 1) == n) {
        flag = true
        break
    }
}
if (flag) {
    console.log(`${n} is a Pronic Number`)
}
else {
    console.log(`${n} is not a Pronic Number`)

}