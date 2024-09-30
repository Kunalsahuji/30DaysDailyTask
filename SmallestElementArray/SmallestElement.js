const n = parseInt(prompt("Enter number: "), 10);
const arr = prompt("Enter values: ").split(' ').map(Number);

let minimum = arr[0];
for (let i = 1; i < n; i++) {
    if (arr[i] < minimum) {
        minimum = arr[i];
    }
}

console.log(`Minimum number is ${minimum}`);
