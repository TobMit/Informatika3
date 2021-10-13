#include "Testy.h"
#include "Dtata.h"
#include "Vstup.h"
#include "Losovanie.h"

const MUINT POCETZREBOV = 6;

bool Start() 
{
	AlokujZreby(POCETZREBOV);
	PripravZreby(POCETZREBOV);

	if (zreby[3].cislo != 4)
		return false;
	if (zreby[2].kod != 'C')
		return false;

	for (int i = 0; i < POCETZREBOV; i++)
	{
		if (zreby[i].cislo != (i + 1))
			return false;
		if (zreby[i].kod != ('A' + (i % 26)))
			return false;
		
	}

	Losuj(POCETZREBOV, 3);
	return true;
}