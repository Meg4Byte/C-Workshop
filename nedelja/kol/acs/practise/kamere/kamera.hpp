#ifndef KAMERA_HPP_INCLUDED
#define KAMERA_HPP_INCLUDED

#include <iostream>

class Kamera
{
    protected:
        int megaPiksel;
        int freeSpace;
        static int photoCounter;

    public:
        Kamera() : megaPiksel(0) , freeSpace(0) {}
        Kamera(int mpx , int fs) 
        : megaPiksel(mpx) , freeSpace(fs) {}
        Kamera(const Kamera& kam) 
        : megaPiksel(kam.megaPiksel) , freeSpace(kam.freeSpace){}

        int getPhotoCounter() const
        {
            return photoCounter;
        }

        bool slikaj() 
        {
            if (freeSpace - megaPiksel >= 0 )
            {
                freeSpace -= megaPiksel;
                photoCounter++;
                //std::cout << photoCounter << std::endl;
                return true;
            }
            return false;
        }

};

#endif //KAMERA_HPP_INCLUDED