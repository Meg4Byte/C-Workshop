#ifndef KAMERA_HPP_INCLUDED
#define KAMERA_HPP_INCLUDED
#include <iostream>


class Kamera
{
    private:
        int mega_pix;
        int free_space;
        static int photo_cnt;

    public:
        Kamera() 
        : mega_pix(1) , free_space(1) {}

        Kamera(int mpx , int fs) 
        : mega_pix(mpx) , free_space(fs) {}

        Kamera(const Kamera& kam)
        : mega_pix(kam.mega_pix) , free_space(kam.mega_pix) {}


        int get_photo_cnt() const
        {
            return photo_cnt;
        }

        bool slikaj()
        {
            photo_cnt++;
            if (free_space >= mega_pix)
            {
                free_space -= mega_pix;
                return true;
            }
            return false;

        }

        friend std::ostream& operator << (std::ostream& os , const Kamera& kam)
        {
            os << "Ovo je kamera : mpx : " << kam.mega_pix << " free space : " << kam.free_space << " num of photos" << kam.photo_cnt << std::endl;
            os << "OJOJ" << kam.mega_pix;
            return os;
        } 



};

#endif // KAMERA_HPP

