import Cards from "../components/Cards";
import virat from "./assets/virat.jpeg";
import rohit from "./assets/rohit.jpeg";
import vaibhav from "./assets/vaibhav.jpeg";
import MyHooks from "../components/MyHooks";

import './App.css'
function App(){
  return(
    <div>
      <h1>IPL Tournament</h1>
      <Cards pic={virat} title="Virat kohli" desc="Winner of IPL 2026" />
      <Cards pic={rohit} title="Rohit sharma" desc="Highest runs in oneday" />
      <Cards pic={vaibhav} title="vaibhav suryavanshi" desc="Most awards in an IPL season" />
      <Cards pic={virat} title="Virat kohli" desc="Winner of IPL 2026" />
      <Cards pic={rohit} title="Rohit sharma" desc="Highest runs in oneday" />
      <Cards pic={vaibhav} title="vaibhav suryavanshi" desc="Most awards in an IPL season" />
      <Cards pic={virat} title="Virat kohli" desc="Winner of IPL 2026" />
      <Cards pic={rohit} title="Rohit sharma" desc="Highest runs in oneday" />
      <Cards pic={vaibhav} title="vaibhav suryavanshi" desc="Most awards in an IPL season" />
      <Cards pic={virat} title="Virat kohli" desc="Winner of IPL 2026" />
      <Cards pic={vaibhav} title="vaibhav suryavanshi" desc="Most awards in an IPL season" />
      <MyHooks />
    </div>
  
  )
}
export default App;