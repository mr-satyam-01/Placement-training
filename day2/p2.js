
let circle = document.querySelector('div');
let btn = document.querySelector('button');

circle.style.background = 'red';

btn.addEventListener('click', () => {
    if (circle.style.background === 'red') {
        circle.style.background = 'blue';
    } else if (circle.style.background === 'blue') {
        circle.style.background = 'yellow';
    } else if (circle.style.background === 'yellow') {
        circle.style.background = 'pink';
    } else {
        circle.style.background = 'red';
    }
});

