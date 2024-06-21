#ifndef HEAD1_HPP_INCLUDED
#define HEAD1_HPP_INCLUDED

#define max_sound = 20
#define min_sound = 0
#define step_sound = 1

#define max_kanal = 5
#define min_kanal = 1
#define step_kanal = 1

enum States {ON , OFF , BROKEN};

class Televizor
{
    private:
        States state;
        int zvuk;
        int kanal;

    public:
        Televizor();

        Televizor(const Televizor &other);

        bool ukljuci();
        bool iskljuci();
        bool pokvari();
        bool popravi();

        bool pojacajzvuk();
        bool smanjizvuk();
        bool sledecikanal();
        bool prethodnikanal();

        States getState() const;
        int getZvuk() const;
        int getKanal() const;

};




#endif // HEAD1_HPP

