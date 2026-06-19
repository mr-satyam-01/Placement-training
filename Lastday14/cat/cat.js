const img = document.getElementById("catImage");
const btn = document.getElementById("btn");

async function getCat() {
    const response = await fetch("https://api.thecatapi.com/v1/images/search");
    const data = await response.json();

    img.src = data[0].url;
}

getCat(); // Load first cat

btn.addEventListener("click", getCat);