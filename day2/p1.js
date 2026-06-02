let content = document.querySelector('h1')
console.log(content)
let btn = document.querySelector('button')
console.log(btn)


function add(a,b){
    console.log(a+b)
}

add(4,5)
add(5,6)


const addition = (a,b) => {
console.log(a+b)
}
addition(9,5)


//if else
let age = 12;
if(age>18){
    console.log("you can vote")
}else{
    console.log("you cannot vote")
}
//--------------------------------------------------------
btn.addEventListener('click',()=>{
    if(content.textContent == "I am learning JS"){
        content.textContent = "I want to learn React"
    }else{
        content.textContent = "I am learning JS"
    }
})