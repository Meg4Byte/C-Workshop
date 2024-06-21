#ifndef TELEFON_GEN3_HPP_INCLUDED
#define TELEFON_GEN3_HPP_INCLUDED

#include "dinstring.hpp"
#include "telefon_gen2.hpp"
#include "video_kamera.hpp"

class TelefonGen3 : public TelefonGen2
{
    private : 
        VideoKamera vk;

    public :
        TelefonGen3() 
        : TelefonGen2() , vk(){}
        TelefonGen3(const DinString &broj, int mpx , int fs) 
        : TelefonGen2(broj , mpx , fs) , vk(mpx , fs) {}

        bool snimiVideo(int sec)
        {
            bool tmp = vk.snimaj(sec);
            return tmp;
        }

};

#endif // TELEFON_GEN3_HPP_INCLUDED