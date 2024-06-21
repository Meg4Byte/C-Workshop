#ifndef HEADER_1_H_INCLUDED
#define HEADER_1_H_INCLUDED

#include <iostream>

#define MIN_VALUE 0 
#define MAX_VALUE 80
#define STEP 20

enum MachineState{A , B , C , D};

class Machine
{
    private:
        
        MachineState current_state;
        int value;

    public:
        Machine();
        
        bool metodaX();
        bool metodaY();
        bool metodaZ();
        bool metodaW();

        bool plus();
        bool minus();

        MachineState getCurrentState() const;
        int getValue() const;


};


#endif 