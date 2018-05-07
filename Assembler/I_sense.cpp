/*
* I_sense.cpp
* Gisi Musa
*/

#include "allHeaders.h"

I_sense::I_sense() { 

}

I_sense::~I_sense() {

}

void I_sense::read() { 

}

int I_sense::parse(string args, int line) { 
    
    //sense sensedir cond fail
    
    switch(this->dir){
    
        case "here":
            //sense current position
            
            break;
        case "ahead":
            //sense position x+1, y 
            
            break;
        case "leftahead":
            //sense position x, y-1 if y even else (x+1, y-1)
            
            break;
        case "rightahead":
            //sense position x, y+1 if y even else (x+1, y+1)
            
            break;
    
    
    }


}