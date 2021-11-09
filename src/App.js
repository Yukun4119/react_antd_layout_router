import Homepage from "./pages/Home.js"
import Page2 from "./pages/Page2.js"
import Page3 from "./pages/Page3.js"
import React, { useState } from 'react';
import { BrowserRouter,Routes, Route,useLocation, Link} from 'react-router-dom';
const App = () => {
  return (
    <div>
     <BrowserRouter basename="/react_antd_layout_router">
      <Routes>
        <Route path="/" element={<Homepage />}/>
        <Route path="p2" element={<Page2/>} />
        <Route path="p3" element={<Page3/>} />
      </Routes>
    </BrowserRouter>,
    </div>
  );
}
export default App;
