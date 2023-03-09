let parentElement = document.body.querySelector('p');

function changeParagraphText(){
    parentElement.textContent = 'Clicked!';
}

parentElement.addEventListener('click', changeParagraphText);

let inputElement = document.querySelector('input');

function retrieveUserInput(){
    // let enteredText = inputElement.value;
    let enteredText = event.target.value;
    console.log(enteredText);
    // console.log(event);
}

inputElement.addEventListener('input', retrieveUserInput);