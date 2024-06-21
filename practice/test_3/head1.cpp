#include <iostream>
#include "head1.h"


Rerna::Rerna()
{
    cur_state = OFF;
    temp = 0;
}

bool Rerna::ukljuci()
{
    if (cur_state == OFF)
    {
        cur_state = ON
        temp += STEP
        return true;
    }

    else
    {
        return false;
    }
}

bool Rerna::iskljuci()
{
    if (cur_state == ON)
    {
        cur_state = OFF;
        temp = MIN_TEMP;
        return true;
    }

    else
    {
        return false;
    }

}

bool Rerna::pokvari()
{
    if (cur_state != BROKEN)
    {
        cur_state = BROKEN;
        temp = MIN_TEMP;
        return true;
    }

    else
    {
        return false;
    }


}

bool Rerna::popravi()
{
    if (cur_state == BROKEN)
    {
        cur_state = OFF;
        temp = MIN_TEMP;
        return true;
    }

    else
    {
        return false;
    }

}

bool Rerna::pojacajTemperaturu()
{
    if (cur_state == ON)
    {
        if (temp >= MIN_TEMP && temp <= MAX_TEMP)
            temp += STEP;
            if temp >= MAX_TEMP
            {
                temp = MAX_TEMP;
            }
            
        return true;
    }

    else
    {
        return false;
    }
}

bool Rerna::smanjiTemperaturu()
{
    if (cur_state == ON)
    {
        if (temp >= MIN_TEMP && temp <= MAX_TEMP)
        {
            temp -= STEP
            if (temp <= MIN_TEMP)
            {
                temp = MIN_TEMP;
            }

        }

        return true;   
    }

    else
    {
        return false;
    }
}

State Rerna::getCurState() const
{
    return cur_state;
}

int Rerna::getTemp() const
{
    return temp;
}
