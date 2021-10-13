#include<stdlib.h>
#include "Losovanie.h"

void Vymen(MUINT index, MUINT i);

/// <summary>
/// Losovanie Zrebov
/// </summary>
/// <param name="celkovyPocetZrebov">Pocet vsetkych zrebov v sutazi</param>
/// <param name="pocetLosovanychZrebov">Pocet kolko sa bude zrebovat zrebov</param>

void Losuj(MUINT celkovyPocetZrebov, MUINT pocetLosovanychZrebov)
{
	srand(time(NULL));
	for (MUINT i = 0; i < pocetLosovanychZrebov; i++)
	{
		MUINT index = rand() % (celkovyPocetZrebov - i) + i;
		Vymen(index, i);
	}
}

void Vymen(MUINT index, MUINT i) 
{
	struct Zreb c = zreby[index];
	zreby[index] = zreby[i];
	zreby[i] = c;
}