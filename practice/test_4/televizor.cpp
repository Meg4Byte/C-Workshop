
#include <iostream>
#include "televizor.hpp"


Televizor::Televizor()
{
    state = OFF;
    zvuk = min_sound;
    kanal = min_kanal;
}

Televizor::Televizor(const Televizor &var)
{
    state = var.state;
    zvuk = var.zvuk;
    kanal = var.kanal;
}

State Televizor::getState() const
{
    return state;
}

int Televizor::getZvuk() const
{
    return zvuk;
}

int Televizor::getKanal() const
{
    return kanal;
}

bool Televizor::ukljuci()
{
    if (state == OFF)
    {
        state = ON;
        return true;
    }

    else
    {
        return false;
    }

}

bool Televizor::iskljuci()
{
    if (state == ON)
    {
        state = OFF;
        zvuk = min_sound;
        kanal = min_kanal;
        return true;
    }

    else
    {
        return false;
    }

}

bool Televizor::popravi()
{
    if (state == BROKEN)
    {
        state = OFF;
        zvuk = min_sound;
        kanal = min_kanal;
        return true;
    }

    else
    {
        return false;
    }

}

bool Televizor::pokvari()
{
    if (state != BROKEN)
    {
        state = BROKEN;
        zvuk = min_sound;
        kanal = min_kanal;
        return true;
    }

    else
    {
        return false;
    }
}

bool Televizor::pojacajZvuk()
{
    if (state == ON)
    {
        if (zvuk + step_sound <= max_sound)
        {
            zvuk += step_sound;
        }
        else
        {
            zvuk = max_sound;
        }

        return true;
    }

    else
    {
        return false;
    }

}

bool Televizor::smanjiZvuk()
{

    if (state == ON)
    {
        if (zvuk - step_sound >= min_sound)
        {
            zvuk -= step_sound;
        }
        else
        {
            zvuk = min_sound;
        }
        return true;
    }
    else
    {
        return false;
    }

}

bool Televizor::sledeciKanal()
{
    if (state == ON)
    {
        if (kanal + step_kanal <= max_kanal)
        {
            kanal += step_kanal;
        }
        else
        {
            kanal = max_kanal;
        }

        return true;
    }
    else
    {
        return false;
    }
}


bool Televizor::prethodniKanal()
{
    if (state == ON)
    {
        if (kanal - step_kanal >= min_kanal)
        {
            kanal -= step_kanal;
        }
        else
        {
            kanal = min_kanal;
        }

        return true;
    }

    else
    {
        return false;
    }

}

