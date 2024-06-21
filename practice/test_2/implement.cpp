#include <iostream>
#include "header_1.h"

Machine::Machine()
{
    current_state = C;
    value = MAX_VALUE;
}

bool Machine::metodaX()
{
    bool result;

    if current_state == B
    {
        current_state = A;
        result = true;
    }

    else if current_state == C
    {
        current_state = A;
        result = false;
    }

    else
    { 
        result = False;
    }

    return result;
}

bool Machine::metodaY()
{
    bool result;

    if current_state == B
    {
        current_state = C;
        value = MAX_VALUE;
        result = true;
    }

    else if current_state == D 
    {
        current_state = C;
        value = MAX_VALUE;
        result = true;
    }

    else
    {
        result = false;
    }

    return result;
}

bool Machine::metodaZ()
{
    bool result;

    if current_state == A
    {
        current_state = B;
        value = MIN_VALUE;
        result = true;
    }
    else
    {
        result = false;
    }

    return result;

}

bool Machine::metodaW()
{
    bool result;

    if current_state == A
    {
        current_state = D;
        value = MIN_VALUE;
        result = true;
    }

    else
    {
        result = false;
    }

    return result;
}


bool Machine::plus()
{
    bool result;

    if current_state != A
    {
        result = false
    } 

    else
    {
        if value >= MAX_VALUE
        {
            value = MAX_VALUE;
        }

        else if value + STEP < MAX_VALUE
        {
            value += STEP;
        }
            
        result = true;
    }

    return result;
}

bool Machine::minus()
{
    bool result;
    if current_state != A
    {
        result = false;
    }

    else
    {
        if value == MIN_VALUE
        {
            value = MIN_VALUE;
        }

        else if value - STEP >= MIN_VALUE
        {
            value -= STEP;
        }

        result = true;

    }

    return result;
}


MachineState Machine::getCurrentState() const
{
    return current_state;
}

int Machine::getValue() const
{
    return value;
}


