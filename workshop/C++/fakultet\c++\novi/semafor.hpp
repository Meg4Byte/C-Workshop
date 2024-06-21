#ifndef SEMAFOR_DEF
#define SEMAFOR_DEF

#include <iostream>

using namespace std;

enum stanja
{
	sON;  //; ili , 
	sOFF;
	sBlink;
	sOUT;
};

enum boje   //da li mora velio slovo?
{
	cNONE;  //da li mora veliko slovo
	cBLINK;
	cRED;
	cYELLOW_RED;
	cYELLOW;
	cGREEN; //da li je bitan poredak?
};

//sada definisi klasu semafor 

class Semafor
{
	public:

		Semafor();

		bool turnOn();
		bool turnOff();
		bool turnBlink();
		bool turnOut();
		bool repair();
		bool changeColor();

		//geteri 

		stanja getStanje() const;
		boje getBoje() const;


	private:

		stanja stanje;
		boje boja;
	
};


#endif 