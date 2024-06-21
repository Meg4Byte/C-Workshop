#ifndef VIDEO_KAMERA_HPP_INCLUDED
#define VIDEO_KAMERA_HPP_INCLUDED

#include "kamera.hpp"

class VideoKamera : public Kamera
{
    protected:
        static int video_counter;

    public:
        VideoKamera() {}

        VideoKamera(int mpx , int fs)
        : Kamera(mpx , fs) {}

};

#endif // VIDEO_KAMERA_HPP