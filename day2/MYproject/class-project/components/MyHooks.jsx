import { useState } from "react";
import { useEffect } from "react";

export default function MyHooks() {
    const [count, setCount] = useState(0);
    function plus() {
        setCount(count + 1)
    }
    function minus() {
        setCount(count - 1)
    }
    return (
        <div>
            <h2>My Counter value is : {count}</h2>
            <button onClick={plus} >Add</button>  <button onClick={minus}>Less</button>
        </div>
    )
}