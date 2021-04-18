import { SwipeableDrawer } from '@material-ui/core';
import React, { useState } from 'react'
import TinderCard from "react-tinder-card";
import "./TinderCards.css";
function TinderCards() {
    const [people,setPeople] = useState([
        {
            name:'Elon musk',
            url: "https://www.google.com/search?q=elon+musk+photo&sxsrf=ALeKk03YkL9ajHFgz1of1suMEeX3HT2F7g:1605359306511&tbm=isch&source=iu&ictx=1&fir=uRsVR-OCj4bBWM%252CcElLiMk8T9O8LM%252C_&vet=1&usg=AI4_-kRqS7uGSZqZaVrKUHy9mbLL5oUKTQ&sa=X&ved=2ahUKEwid-M25jYLtAhWK7HMBHcMgCUMQ9QF6BAgCEFA#imgrc=uRsVR-OCj4bBWM" 
        },
        {
            name:'jeff Bezos',
            url: "https://www.google.com/search?q=jeff+bezos+photo&sxsrf=ALeKk02jWzg-sdKG0JwcTRmOREhZbxdPgA:1605359470589&tbm=isch&source=iu&ictx=1&fir=ZFP7glDU5ZArlM%252CE0U2SB3yq5CSbM%252C_&vet=1&usg=AI4_-kR11j-nBUH3mvJ1LJbTBmaKgpt6ag&sa=X&ved=2ahUKEwiBvOyHjoLtAhWk83MBHQT8DuIQ9QF6BAgKEDw#imgrc=ZFP7glDU5ZArl"
        },
        {
            name:'sundar pichai',
            url: "https://www.google.com/search?q=elon+musk+photo&sxsrf=ALeKk03YkL9ajHFgz1of1suMEeX3HT2F7g:1605359306511&tbm=isch&source=iu&ictx=1&fir=uRsVR-OCj4bBWM%252CcElLiMk8T9O8LM%252C_&vet=1&usg=AI4_-kRqS7uGSZqZaVrKUHy9mbLL5oUKTQ&sa=X&ved=2ahUKEwid-M25jYLtAhWK7HMBHcMgCUMQ9QF6BAgCEFA#imgrc=uRsVR-OCj4bBWM" 
        },
        {
            name:'Elon musk',
            url: "https://www.google.com/search?q=elon+musk+photo&sxsrf=ALeKk03YkL9ajHFgz1of1suMEeX3HT2F7g:1605359306511&tbm=isch&source=iu&ictx=1&fir=uRsVR-OCj4bBWM%252CcElLiMk8T9O8LM%252C_&vet=1&usg=AI4_-kRqS7uGSZqZaVrKUHy9mbLL5oUKTQ&sa=X&ved=2ahUKEwid-M25jYLtAhWK7HMBHcMgCUMQ9QF6BAgCEFA#imgrc=uRsVR-OCj4bBWM" 
        },
    ]);

    return (   

        <div className="tinderCards">
            <div className="tinderCads_cardContainer">
                {people.map((person)=>(
                    <TinderCard
                    className="tinderCards"
                    key={character.name}
                    preventSwipe={["up","down"]}
                    onSwipe={(dir)=>Swiped(dir,character.name)}
                    onCardLeftScreen={()=>outofFrame(character.name)}
        
                    >
                        
                    </TinderCard>

                ))}
            </div>

            
        </div>
    )
}

export default TinderCards
