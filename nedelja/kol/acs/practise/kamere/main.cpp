#include <iostream>
#include "telefon.hpp"
#include "telefon_gen2.hpp"
#include "telefon_gen3.hpp"
#include "kamera.hpp"
#include "video_kamera.hpp"
#include "dinstring.hpp"

int Kamera:: photoCounter = 0;
int VideoKamera :: videoCounter = 0;

int main()
{
    Kamera kamera;
    Kamera kam(2 , 100);
    int pcount = kam.getPhotoCounter();
    std::cout << "NUM OF PHOTOS : " << pcount << std::endl;
    
    Kamera km (100 , 200);
    for (int i = 0 ; i < 10 ; i++)
    {
        std::cout<< km.slikaj() << std::endl;
    }



    std::cout << "NUM OF PHOTOS : " << kam.getPhotoCounter() << std::endl;

    VideoKamera vk;
    VideoKamera vk1(100 , 1000);

    std::cout << vk.getVideoCounter() << std::endl;
    std::cout << vk1.getVideoCounter() << std::endl;

    for (int i = 0 ; i < 20 ; i ++ )
    {
        vk1.snimaj(2);
    }

    std::cout << vk1.getVideoCounter() << std::endl;


    Telefon t1;
    Telefon t2("532" );

    std::cout<<t2.pozovi("222")<<std::endl;
    std::cout<<t2.pozovi("532")<<std::endl;

    return 0;
}
