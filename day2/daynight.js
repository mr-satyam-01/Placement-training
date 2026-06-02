let website = document.querySelector('body')
let btn = document.querySelector('button')

btn.addEventListener('click', ()=>{
    website.classList.toggle('night')
    if(btn.textContent === '☀️'){
        btn.textContent = '🌚'
    }else{
        btn.textContent = '☀️'
    }
})
