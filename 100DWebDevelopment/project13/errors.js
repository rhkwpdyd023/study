const fs = require("fs");

function readFile() {
  try {
    const fileData = fs.readFileSync("data.json");
  } catch {
    console.log("An error occurred!");
  }
  console.log(fileData);
  console.log("Hi there");
}

readFile();
