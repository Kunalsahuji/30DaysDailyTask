// Find factorial number and factors and sum of factor

// n = parseInt(prompt("Enter number: "))
n = 5
sum = 0
fact = 1
temp = []
for (let i = 1; i <= n; i++) {
    if (n % i == 0) {
        sum += i
        temp.push(i);
    }
    fact *= i
}
console.log(`Factorial of ${n} = ${fact}\nFactors of ${n} = ${temp} and sum = ${sum}`)