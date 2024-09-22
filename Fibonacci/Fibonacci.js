// Fibonacci Number: 

// n = parseInt(prompt("Enter number: "))
let n = 10;
let n1 = 0;
let n2 = 1;

if (n == 0) {
    console.log(`${n}th Fibonacci number is: 0`);
}
else if (n == 1) {
    console.log(`${n}th Fibonacci number is: 0, 1`);
}
else {
    process.stdout.write(`${n}th Fibonacci number series is: 0, 1`)
    n -= 2;
    while (n != 0) {
        let n3 = n1 + n2;
        process.stdout.write(`, ${n3}`);
        n1 = n2;
        n2 = n3;
        n -= 1;
    }
    console.log();
}
