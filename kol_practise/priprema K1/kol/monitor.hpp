#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include <iostream>
#include "screen.hpp"

enum MonitorStates {sON , sOFF , sOUT , sTEST , sSTANDBY};

class Monitor
{
    private:

        MonitorStates state;
        Screen screen;

    public:
        Monitor() : state(sOFF) , screen() {}

        bool turnOn()
        {
            if (state == sOFF)
            {
                state = sON;
                screen.setState(sON);
                return true;
            }
            return false;
        }

        bool turnOff()
        {
            if (state != sOFF || state != sOUT)
            {
                state = sOFF;
                screen.setState(sOFF);
                screen.incB();
                return true;
            }
            return false;

        }

        bool turnOut()
        {
            if (state != sOUT)
            {
                state = sOUT;
                screen.setState(sOFF);
                return true;
            }
            return false;
        }

        bool turnTest()
        {
            if (state == sON)
            {
                state = sTest;
                screen.setState(sON);
                return true;
            }
            return false;
        }

        bool turnStandBy()
        {
            if (state == sON)
            {
                state = sSTANDBY;
                screen.setState(sOFF);
                return true;
            }
            return false;
        }

        bool repair()
        {
            if (state == sOUT)
            {
                state = sOFF;
                scree.setState(sOFF);
                return true;
            }
            return false;
        }

        bool incB()
        {
            if ((state == sON || state == sTEST) && screen.getState() == sOFF)
            {
                return screen.incB();
            }
            return false;
        }

        bool decB()
        {
            if ((state == sON || state == sTEST) && screen.getState() == sOFF)
            {
                return screen.decB();
            }
            return false;
        }

        MonitorStates getMonitorState() const
        {
            return state;
        }

        ScreenStates getScreenState() const
        {
            return screen.getState();
        }

        int getBrightness() const
        {
            return screen.getBrighntess();
        }


};

#endif 