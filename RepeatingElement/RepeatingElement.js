// Get inputs from user using prompt
let n = parseInt(prompt("Enter number: "));
let arr = prompt("Enter values: ").split(" ").map(Number);

// Create a dictionary to store element counts
let dict = {};

// Iterate through the array and count the occurrences of each element
arr.forEach(num => {
    if (dict[num]) {
        dict[num]++;
    } else {
        dict[num] = 1;
    }
});

// Display repeating elements
let repeatingElements = [];
for (let key in dict) {
    if (dict[key] > 1) {
        repeatingElements.push(key);
    }
}

// Print the result
if (repeatingElements.length > 0) {
    console.log("Repeating elements are: " + repeatingElements.join(" "));
} else {
    console.log("No repeating elements.");
}
