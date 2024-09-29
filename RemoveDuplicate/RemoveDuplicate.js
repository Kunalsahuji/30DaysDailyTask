function removeDuplicates(arr) {
    return [...new Set(arr)];
}

// Example
let arr = [1, 1, 2, 3, 3, 4, 4, 5];
console.log(removeDuplicates(arr));
