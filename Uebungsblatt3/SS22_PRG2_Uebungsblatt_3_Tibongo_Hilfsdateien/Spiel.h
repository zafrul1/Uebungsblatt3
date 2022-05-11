#ifndef SPIEL
#define SPIEL 
#include<iostream>
#include "Aufgabe.h"

class Spiel {

private:
	Aufgabe aktuelleraufgabe;   


public:
	int aktiverSpielstein = 0; 
	friend void testSpiel();
	void init();
	void ausgabeLogo();
	void ausgabeRahmen(); 
	void ausgabeLegende(); 
	void ausgabeSteuerung();
	void spielSchleife();
	void spielzug();
	bool eingabeErlaubt(char input); 
	void draw(void); 
	Spiel(Aufgabe* aufgabe);
	



};






#endif 
