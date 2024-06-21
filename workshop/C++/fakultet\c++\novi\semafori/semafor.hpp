#ifndef SEMAFOR_DEF
#define SEMAFOR_DEF
#include <iostream>

#define MIN_TEMP 0
#define MAX_TEMP 220
#define INCREMENT 20

enum StanjeRerne {UKLJUCENA , ISKLJUCENA , POKVARENA};

using namespace std;

class Lockheart
{ 
	private:

		StanjeRerne state;
		int temperatura;

	public:

		Lockheart();
		~Lockheart();

		bool isUkljuci();
		bool isIskljuci();
		bool isPokvari();
		bool isPopravi();

		bool isPojacaj();
		bool isSmanji();

		StanjeRerne getTrenutnoStanje() const;
		int getTemperatura() const;
};

#endif