let age = 27;
let userName = 'Min';
let hobbies = ['Sports', 'Cooking', 'Reading'];
let job = { title: 'Developer' , place: 'New York', salaly: 50000};

let totalAdultYears

function calculateAdultYears(userAge) {
  return userAge - 18
}

totalAdultYears = calculateAdultYears(age);

calculateAdultYears();
alert(totalAdultYears);

age = 45;
totalAdultYears = calculateAdultYears(age);

alert(totalAdultYears);