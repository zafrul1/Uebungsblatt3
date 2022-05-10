#include "Position.h"
#include <string>

int Position::getX()
{
	return x;
}
void Position::setX(int x)
{
	this->x = x;
}
int Position::getY()
{
	return y;
}
void Position::setY(int y)
{
	this->y = y; 
}

std::string Position::to_string() { 
	 
	std::string ausgabe = "Position : x = " + std::to_string(this->x) + " y = " + std::to_string(this->y);

	return ausgabe; 
}
//Addiert zwei Positionen indem die Attribute x und y addiert werden.

Position Position::operator+ (const Position& rhs) const {
	
	Position position; 
	position.x = this->x + rhs.x; 
	position.y = this->y + rhs.y; 

	return Position(0,0);
}
//Vergleicht zwei Position Instanzen. Gibt true zurück, falls x und y beider Instanzen identisch sind, sonst false.
bool Position::operator==(const  Position& rhs) const
{
	if (this->x==rhs.x && this->y == rhs.y)
		return true;
	else
		return false; 
}