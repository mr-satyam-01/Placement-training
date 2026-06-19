
fetch('https://jsonplaceholder.typicode.com/users')
    .then(response => response.json())
    .then(data=>{
        document.querySelector('h1').textContent += data[1].name;
        console.log(data[0].name)
        
    })