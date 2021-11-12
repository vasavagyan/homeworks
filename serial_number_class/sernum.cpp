#include "sernum.h"

int Sernum::counter = 0;

Sernum::Sernum()
{
	counter++;
	serialNumber = counter;
}

Sernum::~Sernum()
{
	counter--;
}

int Sernum::getNumber() const
{
	return serialNumber;
}
