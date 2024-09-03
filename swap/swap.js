{
    // 1. Swap two numbers without using 3rd variable: 
    let a = parseInt(prompt("Enter 1st number: "))
    let b = parseInt(prompt("Enter second number: "))
    console.log(`before swapping: \na = ${a} \nb = ${b}`)
    a = a + b
    b = a - b
    a = a - b
    console.log(`after swapping: \na = ${a} \nb = ${b}`)
}

{
    // # swap three number 
    let a = parseInt(prompt("Enter 1st number: "))
    let b = parseInt(prompt("Enter 2nd number: "))
    let c = parseInt(prompt("Enter 3rd number: "))
    console.log(`before swapping: \na= ${a}\nb= ${b}\nc= ${c}`)
    a = a + b + c
    b = a - b - c
    c = a - b - c
    a = a - b - c
    console.log(`after swapping: \na= ${a}\nb= ${b}\nc= ${c}`)

}
