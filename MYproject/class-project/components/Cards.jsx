
function Cards({pic,title,desc}) {
    return (
        <div className='Card'>
            <img src={pic} alt=''/>
            <h3>{title}</h3>
            <p>{desc}</p>
        </div>
    );
}

export default Cards;