#include"Aufgabe.h"



Aufgabe::Aufgabe(Spielstein* stein1_ptr, Spielstein* stein2_ptr, Spielstein* stein3_ptr, Spielstein* loesung_ptr) {

	
	steine.push_back(stein1_ptr);
	steine.push_back(stein2_ptr);
	steine.push_back(stein3_ptr);
	steine.push_back(this->loesung_ptr = loesung_ptr);

}

Spielstein* Aufgabe::getSpielstein(unsigned int index) {

	return steine[index];

};

bool Aufgabe::geloest() {


	for (unsigned int i = 0; i < steine.size() - 1; i++) {
		for (unsigned int j = 0; j < steine[3]->felder[0][0].size(); j++) {
			if (steine[i]->innerhalb(steine[3]->felder[0][0][j])) {

				return true;
			}
			else {
				return false;
			}
		}
	}
}


void Aufgabe::zeichne() {

	

	Cursor::setze_Farbe(HINTERGRUND_HELL_WEISS);
	
		/*for (unsigned int j = 0; j < steine[3]->felder[0][0].size(); j++) {
			Console::zeichne_punkt(steine[3]->felder[0][0][j].getX() + offset_x, steine[3]->felder[0][0][j].getY() + offset_y, ' '); 

		}*/

		for (int i = 0; i < 4; i++) {

			steine[i]->zeichne(); 

		}


	


}
	
void Aufgabe::loesche() {

	Cursor::setze_Farbe(HINTERGRUND_SCHWARZ);
	int offset_x = loesung_ptr->position.getX();
	int offset_y = loesung_ptr->position.getY();


	for (unsigned int j = 0; j < steine[3]->felder[0][0].size(); j++) {
		Console::zeichne_punkt(steine[3]->felder[0][0][j].getX() + offset_x, steine[3]->felder[0][0][j].getY() + offset_y, ' ');

	}

	for (int i = 0; i < 3; i++) {

		steine[i]->zeichne();

	}

}









