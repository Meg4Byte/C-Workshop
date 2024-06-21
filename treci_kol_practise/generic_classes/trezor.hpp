#ifndef TREZOR_HPP
#define TREZOR_HPP

template<class SADRZAJ , int KAPACITET>
class Trezor
{
    private:
        SADRZAJ boxes[KAPACITET];
        bool auxilary_boxes[KAPACITET];
        int number_of_full_boxes = 0;

    public:

        Trezor()
        {
            for (int i = 0 ; i < KAPACITET ; i++)
            {
                auxilary_boxes[i] = false;
            }
            number_of_full_boxes = 0;
        }

        void print_content()
        {
            for (int i = 0 ; i < KAPACITET ; i ++)
            {
                std::cout << boxes[i] << " , " ;
            }

        }

        int getBrojPopunjenihSefova()
        {
            for (int i = 0 ; i < KAPACITET ; i++)
            {
                if (auxilary_boxes[i])
                {
                    number_of_full_boxes++;
                }
            }

            return number_of_full_boxes;
        }

        int ubaciSadrzaj(const SADRZAJ& predmet)
        {
            for (int i = 0 ; i < KAPACITET ; i++)
            {
                if (!auxilary_boxes[i])
                {
                    auxilary_boxes[i] = true;
                    boxes[i] = predmet;
                    number_of_full_boxes ++;
                    return i;
                }
            }
            return -1;
        }

        bool izbaciSadrzaj(int sef)
        {
            if (sef > KAPACITET or sef < 0)
            {
                return false;
            }

            if (auxilary_boxes[sef])
            {
                auxilary_boxes = false;
                number_of_full_boxes --;
                return true;
            } 

            return false;
        }

};

#endif //TREZOR_HPP