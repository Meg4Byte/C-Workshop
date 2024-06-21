#include <iostream>
#include "semafor.hpp"
#include "semafor.cpp"

using namespace std;

void ispisiRernu (const Lockheart &lh)
{
	cout<<endl;

	switch (lh.getTrenutnoStanje())
	{
	case UKLJUCENA:

		cout<<"UKLJUCENA"<<endl;
		break;
	
	case ISKLJUCENA:

		cout<<"ISKLJUCENA"<<endl;
		break;

	case POKVARENA:

		cout<<"POKVARENA"<<endl;
		break;
	
	default:
		break;
	}

	cout<<endl;
	cout<<"TEMPERATURA RERNE : " <<lh.getTemperatura()<<endl;

}

int meni()
{
	int input;

	cout<<"---OPCIJE---"<<endl;
	cout<<"1)UKLJUCI "<<endl;
	cout<<"2)ISKLJUCI"<<endl;
	cout<<"3)POKVARI "<<endl;
	cout<<"4)POPRAVI "<<endl;
	cout<<"5)POJACAJ "<<endl;
	cout<<"6)SMANJI  "<<endl;
	cout<<"7)KRAJ    "<<endl;

	cin>>input;

	return input;
}


int main(void)
{ 
	Lockheart o;

	int i;
	cout<<"POKRENULO SE"<<endl;
	do
	{
		i = meni();
		
		switch (i)
		{
		case 1:
			
			if(o.isUkljuci())
			{
				cout<<"SUCCESS!"<<endl;
			}

			else
			{
				cout<<"ERROR"<<endl;
			}
			
			ispisiRernu(o);
			break;
		
		default:
			break;
		}


	} while (i != 7);
	
	return 0;
}
