function greetUser(greetingPrefix, userName = "user") {
  //   console.log(greetingPrefix + " " + userName + "!");
  console.log(`${greetingPrefix} ${userName}!`);
}

greetUser("Hi", "Min");
greetUser("Hello");

function sumUp(...numners) {
  let result = 0;

  for (const number of numbers) {
    result += number;
  }

  return result;
}

const inputNumbers = [1, 5, 10, 11, 20, 31];

console.log(sumUp(...inputNumbers));

console.log(sumUp);
