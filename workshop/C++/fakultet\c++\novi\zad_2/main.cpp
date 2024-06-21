//main

#include<iostream>
#include "frekv.hpp"
#include "frekv.cpp"

using namespace std;

char main_meni()
{
    char temp;

    do
    {
        cout<<"---ODABERI OPCIJU---"<<endl;
        cout<<"1)UKLJUCI"<<endl;
        cout<<"2)ISKLJUCI"<<endl;
        cout<<"3)POKVARI"<<endl;
        cout<<"4)POPRAVI"<<endl;
        cout<<"5)POJACAJ FREKVENCIJU"<<endl;
        cout<<"6)SMANJI FREKVENCIJU"<<endl;
        cout<<"7)POJACAJ ZVUK"<<endl;
        cout<<"8)SMANJI ZVUK"<<endl;
        cout<<"9)EXIT"<<endl;

        cin>>temp;

    } while (temp <'1' || temp >'9');
}

void ispisi(const FMRadio &a)
{
        cout<<"---TRENUTNO STANJE---"<<endl;

        switch (a.getState())
        {
        case sON:

            cout<<"UKLJUCENO"<<endl;
            break;

        case sOFF:

            cout<<"ISKLJUCENO"<<endl;
            break;

        case sOUT:

            cout<<"POKVARENO"<<endl;
            break;

        default:
            break;
        }

        cout<<"---TRENUTNA FREKVENCIJA---"<<endl;
        cout<<a.get_freq()<<endl;


        cout<<"---TRENUTNA JACINA ZVUKA---"<<endl;
        cout<<a.get_volume()<<endl;

}


int main ()
{

    char input;

    FMRadio obj;

    do
    {
        input = main_meni();

        switch (input)
        {
        case '1':

            if (obj.isOn()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '2':

            if (obj.isOff()) //ako je off
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '3':

            if (obj.isOut()) //ako je pokvaren
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '4':

            if (obj.isRepair()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '5':

            if (obj.isIncF()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '6':

            if (obj.isDecF()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;

         case '7':

            if (obj.isIncV()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;


         case '8':

            if (obj.isDecV()) //ako je on
            {
                cout<<"done"<<endl;
            }

            else
            {
                cout<<"doslo je do greske"<<endl;

            }

            ispisi(obj);
            break;



        default:
            cout<<"BYE"<<endl;
            break;
        }

    } while (input != '9');

    return 0;
}
