
console.log(Promise);

let p = new Promise((resolve, reject) => {
    resolve("Job pending error")
})

p.then((msg) => {
    console.log(msg)
}).catch((err) =>
    console.log(err))

let mycal = new Promise((resolve, reject) => {
    let num = 5 + 3;
    if (num == 8) {
        resolve("success")
    } else {
        reject("fail")
    }
})

mycal
    .then((message) => {
        console.log("Good news " + message)
    })
    .catch((error) => {
        console.log("Oops see you " + error)
    })