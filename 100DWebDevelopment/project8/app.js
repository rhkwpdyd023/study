// document.body.children[1].children[0].href = "https://google.com";

let anchorElement = document.getElementById("external-link");
anchorElement.href = "https://google.com";

anchorElement = document.querySelectorAll("p a");
anchorElement.href = "https://academind.com";

let newAnchorElement = document.createElement("a");
newAnchorElement.href = "https://google.com";
newAnchorElement.textContent = "this leads to Google!";

let firstParagraph = document.querySelectorAll("p");

firstParagraph.append(newAnchorElement);
