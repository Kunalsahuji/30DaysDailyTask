//  WAP to check whether the given year is a Leap Year or not

year = parseInt(prompt("Enter a valid year: "))
if (isNaN(year)) {
    console.log("You entered wrong input! Enter a valid year.")
}
else {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        console.log(`${year} is a Leap Year.`)
    }
    else {
        console.log(`${year} is not a Leap Year.`)
    }
}