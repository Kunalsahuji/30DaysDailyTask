// Check Grade Accourding to your marks:

let num = parseInt(prompt("Enter marks to check: "));

if (isNaN(num)) {
    console.log("You entered wrong input. Please enter correct input 😵😕");
}
else if (num >= 91 && num <= 100) {
    console.log(`num = ${num}. You got A+ Grade 🤩✌️`);
}
else if (num >= 81 && num <= 90) {
    console.log(`num = ${num}. You got A Grade 🤗🎉`);
}
else if (num >= 71 && num <= 80) {
    console.log(`num = ${num}. You got B+ Grade 😍👌`);
}
else if (num >= 61 && num <= 70) {
    console.log(`num = ${num}. You got B Grade ☺👋`);
}
else if (num >= 33 && num <= 60) {
    console.log(`num = ${num}. You got C Grade 🙂🙆`);
}
else if (num < 33 && num >= 0 ) {
    console.log(`num = ${num}. You Failed! 😭🥹`);
}
else {
    console.log("Invalid marks. Please enter marks between 0 and 100.");
}
