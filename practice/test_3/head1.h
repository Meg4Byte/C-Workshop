#ifndef HEAD1_H
#define HEAD1_h

#include <iostream>
#define MAX_TEMP 220
#define MIN_TEMP 0
#define STEP 20

enum State {OFF , ON , BROKEN};

class Rerna 
{
    private:
        State cur_state;
        int temp;

    public:
        Rerna();

        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();

        bool pojacajTemperaturu();
        bool smanjiTemperaturu();

        State getCurState() const;
        int getTemp() const;
};

#endif //HEAD1_H
