#ifndef VIDEO_KAMERA_HPP_INCLUDED
#define VIDEO_KAMERA_HPP_INCLUDED

#include "kamera.hpp"

class VideoKamera : public Kamera
{
    private:
        static int videoCounter;

    public:
        VideoKamera() 
        : Kamera(0 , 0) {}
        VideoKamera(int mpx , int fs)
        : Kamera(mpx , fs) {}

        int getVideoCounter () const
        {
            return videoCounter;
        }

        bool snimaj(int sekunde) 
        {
            if (freeSpace >= megaPiksel*sekunde)
            {
                freeSpace -= megaPiksel * sekunde;
                videoCounter++;
                return true;
            }
            return false;
        }
};

#endif //VIDEO_KAMERA_HPP