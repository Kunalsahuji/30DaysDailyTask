// find a square root of given number:
// num = parseInt(prompt("Enter number: "))
// console.log(`Sqaure root of ${num} = ${Math.sqrt(num)}`)
// ------------------------------------------------
// sqrt = (sqr) => sqr ** 0.5
// num_sqrt = 56 //parseInt(prompt("Enter number: "))

// cbrt = (cbr) => cbr ** (1 / 3)
// num_cbrt = 64//parseInt(prompt("Enter number: "))

// power = (base, exponent) => base ** exponent
// base = 2 //parseInt(prompt("Enter base: "))
// exponent = 3 //parseInt(prompt("Enter exponent: "))


// console.log(`Sqaure root of ${num_sqrt} = ${sqrt(num_sqrt)}`)
// console.log(`Cube root of ${num_cbrt} = ${cbrt(num_cbrt)}`)
// console.log(`The ${base} the power of ${exponent} = ${power(base, exponent)}`)
// -------------------------------------------
// function cbrt(x) {
//     return x >= 0 ? x ** (1 / 3) : NaN;
// }

// console.log(cbrt(125));  // Output: 3

// function cbrt(x) {
//     if (x < 0) return -cbrt(-x);
//     if (x === 0) return 0;
//     let y = x;
//     let e = 0.000000001;
//     while (Math.abs(y * y * y - x) > e) {
//         y = (2 * y + x / (y * y)) / 3;
//     }
//     return y;
// }

// console.log(cbrt(-64));  // Output: 4
// console.log(cbrt(125));  // Output: 5

// -----------------------------------
// {

//     cbrt = (x) => {
//         if (x < 0) return -cbrt(-x)
//         if (x === 0) return 0
//         let low = 0
//         let high = x
//         let e = 0.000000001
//         while ((high - low) > e) {
//             let mid = (high + low) / 2
//             if ((mid * mid * mid) <= x) {
//                 low = mid
//             } else {
//                 high = mid
//             }
//         }
//         return low
//     }
//     console.log(cbrt(64))
//     console.log(cbrt(125))
// }

{
    function sqrt(x) {
        if (x < 0) throw new Error("Cannor take square root of negative value")
        if (x === 0) return 0
        return Math.sqrt(x)
    }

    console.log(sqrt(16))
    console.log(Math.sqrt(25))
}

{
    function cbrt(x) {
        if (x < 0) return -Math.cbrt(-x);
        if (x === 0) return 0;
        return Math.cbrt(x);
    }

    console.log(cbrt(64));  // Output: 4
    console.log(cbrt(125));  // Output: 5
}
{
    function cbrt(x) {
        if (x < 0) return -Math.cbrt(-x);
        if (x === 0) return 0;
        return Math.cbrt(x);
    }

    console.log(cbrt(64));  // Output: 4
    console.log(cbrt(125));  // Output: 5
}