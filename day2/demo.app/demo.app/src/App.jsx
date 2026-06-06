import Header from "./component/header";
import Footer from "./component/Footer";
import Greet from "./component/Greet";
function App(){
  const myCollege = "MIT";
  const mySpeed = 49;
  return(
    <div>
    <Header></Header>
    <div>
      <Greet name="satyam"/>
      <h1>Hello from React</h1>
      <h2>I said hello from React</h2>
      {4 * 8 * 7}
      <p>My college is {myCollege}</p>
       {/* {condition ? then do this : else do this } */} 
      {mySpeed<50? <h3 style = {{background:"green",color:"white"}}>you are safe</h3> : <h3 style = {{background:"red",color:"white"}}>you are not safe</h3>}                         

    </div>
    <Footer></Footer>
    </div>
  )
}
export default App;