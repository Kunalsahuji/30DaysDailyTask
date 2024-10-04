// Maximum subarray sum (Kadane's Problem):


function MaxSubArraySum(arr, n) {
    let maxSum = -Infinity;
    let sums = 0;

    for (let i = 0; i < n; i++) {
        sums += arr[i];
        if (sums > maxSum) {
            maxSum = sums;
        }
        if (sums < 0) {
            sums = 0;
        }
    }
    return maxSum;
}

const n = parseInt(prompt("Enter number: "));
const arr = prompt("Enter values: ").split(" ").map(Number);

const result = MaxSubArraySum(arr, n);
console.log(result);
