
#include <iostream>

Class SG {
    Serial::Serial(int id=3);

    SetNext(){
        
        switch(mode){
        case sinusoidal: 
            int Serial::Write(":INSTR:SET:SIN");
            std::cout:: << "Set the sinusoidal function output";
            break;
            
        case step: 
            int Serial::Write(":INSTR:SET:STEP");
            std::cout:: << "Set the step function output";
            break;    
        }
    }

}