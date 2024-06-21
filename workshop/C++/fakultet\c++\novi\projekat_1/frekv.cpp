#include "frekv.hpp"
#include <iostream>

using namespace std;

FMRadio::FMRadio ()
{
    state = sOFF;
    freq = MIN_FREKV;
    volume = MIN_JAC_ZVUKA;
}

bool FMRadio::isOff()
{
        if (state == sON)
        {
            state = sOFF;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isOn()
{
        if (state == sOFF)
        {
            state = sON;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isOut()
{
        if (state != sOUT)
        {
            state = sOUT;
            freq = -1;
            volume = -1;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isRepair()
{
        if (state == sOUT)
        {
            state = sOFF;
            freq = MIN_FREKV;
            volume = MIN_JAC_ZVUKA;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isIncF()
{
        if (state == sON && freq < MAX_FREKV)
        {   
            freq += INCREMENT_FREKV;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isDecF()
{
        if (state == sON && freq > MIN_FREKV)
        {
            freq -= INCREMENT_FREKV;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isIncV()
{
        if (state == sON && volume < MAX_JAC_ZVUKA)
        {
            volume += INCREMENT_ZVUK;
            return true;
        }

        else
        {
            return false;
        }
}

bool FMRadio::isDecV()
{
        if (state == sON && volume > MIN_JAC_ZVUKA)
        {
            volume -= INCREMENT_ZVUK;   
            return true;
        }

        else
        {
            return false;
        }
}

Stanja FMRadio::getState() const
{
        return state;
}

double FMRadio::get_freq() const
{
        return freq;
}

int FMRadio::get_volume() const
{
        return volume;
}
