#ifndef SCREEN_HPP_INCLUDED
#define SCREEN_HPP_INCLUDED

#include <iostream>

#define MAX_BRIGHTNESS 20
#define MIN_BRIGHTNESS 0
#define STEP 2

enum ScreenStates {sON , sOFF };

class Screen
{
    private:
        ScreenStates state;
        int brightness;

    public:
        Screen() : state(sOFF) , brightness(MIN_BRIGHTNESS){}

        bool incB()
        {
            if (state == sON && (brightness + STEP <= MAX_BRIGHTNESS))
            {
                brightness += STEP;
                return true;
            }

            else if (state == sOFF )
            {
                brightness = MIN_BRIGHTNESS;
                return true;
            }

            return false;
        }
        bool decB()
        {
            if (state == sON && (brightness - STEP >= MIN_BRIGHTNESS))
            {
                brightness -= STEP;
                return true;
            }

            else if (state == sOFF)
            {
                brighntess = MIN_BRIGHTENSS;
                return true;
            }

            return false;

        }

        void setState(ScreenStates s)
        {
            state = s;
        }

        ScreenStates getState() const
        {
            return state;
        }

        int getBrightness() const
        {
            return brightness;
        }

};

#endif 