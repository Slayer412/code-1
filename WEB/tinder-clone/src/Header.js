import React from "react";
import "./Header.css";
import IconButton from '@material-ui/core/IconButton';
import ForumIcon from '@material-ui/icons/Forum';
import PersonIcon from '@material-ui/icons/Person';
function header() {
    return ( 
    <div className="header">
    
        <IconButton>
            <PersonIcon />
        </IconButton>
        <img 
            className="Header_logo" src="https://www.flaticon.com/premium-icon/icons/svg/1377/1377233.svg" 
            alt="" 
       />
        <IconButton>
            <ForumIcon fontSize="large" className="header_icon" />
        </IconButton>
        </div>
    ) ;
}
export default header;
