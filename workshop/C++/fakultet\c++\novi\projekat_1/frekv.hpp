#ifndef FREKV_DEF
#define FREKV_DEF
#include <iostream>
#include <string>

#define MIN_FREKV = 87.5;
#define MAX_FREKV = 108;
#define INCREMENT_FREKV = 0.5;
#define MIN_JAC_ZVUKA = 0;
#define MAX_JAC_ZVUKA = 20;
#define INCREMENT_ZVUK = 1;


using namespace std;


enum Stanja {sOFF = 0 , sOUT  , sON};

class FMRadio :
{
    private:
        Stanja state();
        double freq;
        int volume;

    public:
        FMRadio();

        //pali , gasi , pokvari , popravi

        bool isOff();
        bool isOn();
        bool isOut();
        bool isRepair();

        //pojacaj , smanji , promeni freq 

        bool isIncF();
        bool isDecF();
        bool isIncV();
        bool isDecV();

        //geteri 

        Stanja getState() const;
        double get_freq() const;
        int get_volume() const;

}

#endif