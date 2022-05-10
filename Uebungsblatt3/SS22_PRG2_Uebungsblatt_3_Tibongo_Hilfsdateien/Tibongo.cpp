#include <iostream>
#include "Spielstein.h"
#include "Configuration.h"
#include "Aufgabe.h"
#include "Spiel.h"





void testSpielsteine()
{
	for (int i = 0; i <= 11; i++)
	{
		Spielstein* stein_ptr = new Spielstein(i);
		stein_ptr->position.setX(i * 6);
		stein_ptr->position.setY(15);
		stein_ptr->zeichne();
	}
}

int main()
{
	Console::init();
	Cursor::setze_Farbe(HINTERGRUND_HELL_LILA);
	for (int x = 10; x < 35; x++)
		for (int y = 5; y < 10; y++)
		{
			if (x==10 || x == 34 || y == 5 || y == 9)
				Console::zeichne_punkt(x, y, ' ');
		}
	Cursor::bewegen(13, 7);
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

	std::cout << "Hochschule Augsburg";
	
	testSpielsteine();

	/*Spielstein b(1); 
	Spielstein* stein_ptr = new Spielstein(1);

	b.ueberlapp(*stein_ptr);  */
	return 0;
}