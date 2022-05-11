#include "Spiel.h"
#include "SimpleInput.h"


void Spiel::init() {


	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
	ausgabeRahmen();
	
	
	 ausgabeLegende();
	 ausgabeSteuerung(); 
	 ausgabeLogo();
	 spielSchleife();


}
void Spiel::ausgabeLogo() {
	
	Cursor::bewegen(0, 22);
	std::cout << "        ,----,                                                                         " << std::endl;
	std::cout << "      ,/   .`|                       ,----..            ,--.                ,----..    " << std::endl;
	std::cout << "    ,`   .'  :   ,---,    ,---,.    /   /   \\         ,--.'|  ,----..      /   /   \\   " << std::endl;
	std::cout << "  ;    ;     /,`--.' |  ,'  .'  \\  /   .     :    ,--,:  : | /   /   \\    /   .     :  " << std::endl;
	std::cout << ".'___,/    ,' |   :  :,---.' .' | .   /   ;.  \\,`--.'`|  ' :|   :     :  .   /   ;.  \\ " << std::endl;
	std::cout << "|    :     |  :   |  '|   |  |: |.   ;   /  ` ;|   :  :  | |.   |  ;. / .   ;   /  ` ; " << std::endl;
	std::cout << ";    |.';  ;  |   :  |:   :  :  /;   |  ; \\ ; |:   |   \\ | :.   ; /--`  ;   |  ; \\ ; | " << std::endl;
	std::cout << "`----'  |  |  '   '  ;:   |    ; |   :  | ; | '|   : '  '; |;   | ;  __ |   :  | ; | ' " << std::endl;
	std::cout << "    '   :  ;  |   |  ||   :     \\.   |  ' ' ' :'   ' ;.    ;|   : |.' .'.   |  ' ' ' : " << std::endl;
	std::cout << "    |   |  '  '   :  ;|   |   . |'   ;  \\; /  ||   | | \\   |.   | '_.' :'   ;  \\; /  | " << std::endl;
	std::cout << "    '   :  |  |   |  ''   :  '; | \\   \\  ',  / '   : |  ; .''   ; : \\  | \\   \\  ',  /  " << std::endl;
	std::cout << "    ;   |.'   '   :  ||   |  | ;   ;   :    /  |   | '`--'  '   | '/  .'  ;   :    /   " << std::endl;
	std::cout << "    '---'     ;   |.' |   :   /     \\   \\ .'   '   : |      |   :    /     \\   \\ .'    " << std::endl;
	std::cout << "              '---'   |   | ,'       `---`     ;   |.'       \\   \\ .'       `---`      " << std::endl;
	std::cout << "                      `----'                   '---'          `---`                    " << std::endl;




}
void Spiel::ausgabeRahmen() {
	
	int start_x = CONFIGURATION::SPIELFELD_OFFSET_X;
	int length = CONFIGURATION::SPIELFELD_OFFSET_X + CONFIGURATION::SPIELFELD_DIMENSION_X + 15 ;
	int start_y = CONFIGURATION::SPIELFELD_OFFSET_Y;
	int height = CONFIGURATION::SPIELFELD_OFFSET_Y + CONFIGURATION::SPIELFELD_DIMENSION_Y;

	for (int x = start_x; x < length; x++)
		for (int y = start_y; y < height; y++)
		{
			if (x == start_x || x == length - 1 || y == start_y || y == height - 1)
				Console::zeichne_punkt(x, y, CONFIGURATION::SPIELFELD_BEGRENZUNG);
		}

}
void Spiel::ausgabeLegende() {

	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
	

	for (unsigned int i = 0; i < aktuelleraufgabe.steine.size() -1 ; i++) {

		aktuelleraufgabe.steine[i]->position.setX((i+2) * 6); 
		aktuelleraufgabe.steine[i]->position.setY(18);
		aktuelleraufgabe.steine[i]->zeichne(); 
	    
	}

		aktuelleraufgabe.steine[0]->position.setX(CONFIGURATION::SPIELFELD_STEIN1_X);
		aktuelleraufgabe.steine[0]->position.setY(CONFIGURATION::SPIELFELD_STEIN1_Y);

		aktuelleraufgabe.steine[1]->position.setX(CONFIGURATION::SPIELFELD_STEIN2_X);
		aktuelleraufgabe.steine[1]->position.setY(CONFIGURATION::SPIELFELD_STEIN2_Y);

		aktuelleraufgabe.steine[2]->position.setX(CONFIGURATION::SPIELFELD_STEIN3_X);
		aktuelleraufgabe.steine[2]->position.setY(CONFIGURATION::SPIELFELD_STEIN3_Y);

		Console::verstecken();
		Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

		for (unsigned int i = 0; i < aktuelleraufgabe.steine.size() - 1; i++) {

			aktuelleraufgabe.steine[i]->zeichne();

		}
		

	

	

	

	
}
void Spiel::ausgabeSteuerung() {

	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

	int start_x = CONFIGURATION::SPIELFELD_OFFSET_X + 40; //45
	int length = CONFIGURATION::SPIELFELD_OFFSET_X + CONFIGURATION::SPIELFELD_DIMENSION_X + 55; // 75
	int start_y = CONFIGURATION::SPIELFELD_OFFSET_Y + 1; //3
	int height = CONFIGURATION::SPIELFELD_OFFSET_Y + CONFIGURATION::SPIELFELD_DIMENSION_Y -2 ; //15

	for (int x = start_x; x < length; x++)
		for (int y = start_y; y < height; y++)
		{
			if (x == start_x || x == length - 1 || y == start_y || y == height - 1)
				Console::zeichne_punkt(x, y, CONFIGURATION::SPIELFELD_BEGRENZUNG);
		}

	Cursor::bewegen(46, 4);
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
	std::cout << "   SPIELSTEIN - BEWEGUNG :\n";
	Cursor::rechts(45);
	std::cout << "----------------------------\n";
	Cursor::rechts(45);
	std::cout << " W - HOCH\n";
	Cursor::rechts(45);
	std::cout << " A - LINKS\n";
	Cursor::rechts(45);
	std::cout << " S - RUNTER\n";
	Cursor::rechts(45);
	std::cout << " D - RECHTS\n";
	Cursor::rechts(45);
	std::cout << " Q - LINKSROTATION\n";
	Cursor::rechts(45);
	std::cout << " E - RECHTSROTATION\n";
	Cursor::rechts(45);
	std::cout << " F - FLIP\n";
	Cursor::rechts(45);
	std::cout << " 1,2,3,4 - STEINAUSWAHL\n";


	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
}
void Spiel::spielSchleife() {

	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

	while (aktuelleraufgabe.geloest() == false) {

		spielzug(); 
	}
}
void Spiel::spielzug() {

	Console::verstecken();
	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);

	int input = SimpleInput::getSteuerung(CONFIGURATION::INTERVALL); 
	
	if (input == CONFIGURATION::EINGABE_UNGUELTIG) {

		return spielzug(); 
	}

	else if (input == CONFIGURATION::SPIELSTEIN_BEWEGEN_HOCH || input == CONFIGURATION::SPIELSTEIN_BEWEGEN_RUNTER ) {

		aktuelleraufgabe.steine[aktiverSpielstein]->loesche(); 
		aktuelleraufgabe.steine[aktiverSpielstein]->bewegen(input);
		aktuelleraufgabe.steine[aktiverSpielstein]->zeichne(); 
		
	}
	else if ( input == CONFIGURATION::SPIELSTEIN_BEWEGEN_RECHTS || input == CONFIGURATION::SPIELSTEIN_BEWEGEN_LINKS) {

		aktuelleraufgabe.steine[aktiverSpielstein]->loesche();
		aktuelleraufgabe.steine[aktiverSpielstein]->bewegen(input);
		aktuelleraufgabe.steine[aktiverSpielstein]->zeichne();

	}
	else if (input == CONFIGURATION::SPIELSTEIN_ROTIEREN_RECHTS || input == CONFIGURATION::SPIELSTEIN_ROTIEREN_LINKS) {

		 aktuelleraufgabe.steine[aktiverSpielstein]->loesche();
		 aktuelleraufgabe.steine[aktiverSpielstein]->bewegen(input);
		 aktuelleraufgabe.steine[aktiverSpielstein]->zeichne();

	}
	else if (input == 0 || input == 1 || input == 2 ) {

		aktiverSpielstein = input; 

	}

	

	

}
bool Spiel::eingabeErlaubt(char input) {

	int left_side = CONFIGURATION::SPIELFELD_OFFSET_X;
	int right_side = CONFIGURATION::SPIELFELD_OFFSET_X +CONFIGURATION::SPIELFELD_DIMENSION_X + 15;
	int upper_side = CONFIGURATION::SPIELFELD_OFFSET_Y;
	int bottom_side = CONFIGURATION::SPIELFELD_OFFSET_Y + CONFIGURATION::SPIELFELD_DIMENSION_Y;

	for (unsigned int i = 0; i < aktuelleraufgabe.steine.size(); i++) {
		
		if (left_side == aktuelleraufgabe.steine[i]->position.getX() + input || right_side == aktuelleraufgabe.steine[i]->position.getX() + input) {
			return false; 
		}
		else if (upper_side == aktuelleraufgabe.steine[i]->position.getY() + input || bottom_side == aktuelleraufgabe.steine[i]->position.getY() + input) {
			return false;
		}
		else {
			return true; 
		}
	}

}
void Spiel:: draw (void) {

	for (unsigned int i = 0; i < aktuelleraufgabe.steine.size(); i++) {
		if (aktuelleraufgabe.steine[i] == NULL) {
			aktuelleraufgabe.steine[i]->zeichne();
		}
	}

}
Spiel::Spiel(Aufgabe* aufgabe) {

	aktuelleraufgabe = *aufgabe;
	init();
	spielSchleife();

}

  

