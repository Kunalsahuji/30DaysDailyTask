// table of n number:

// {
//     n = parseInt(prompt("Enter number:"))
//     for (let i = 1; i <= 10; i++) {
//         console.log(i * n)
//     }
// }

// print all the evne and odd numbers from 0 to n numbers:

n = 20
for (let i = 0; i <= n; i++) {
    if (i % 2 == 0) {
        console.log(`${i} is even`)
    }
    else {
        console.log(`${i} is odd`)
    }
}

