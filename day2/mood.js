
let space = document.querySelector('div');
let btn1 = document.getElementById('a');
let btn2 = document.getElementById('b');
let img = document.querySelector("img");

btn1.addEventListener("click", () => {
    img.src = "happy.jpeg";
});

btn2.addEventListener("click", () => {
    img.src = "sad.jpeg";
});