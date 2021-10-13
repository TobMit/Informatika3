#include "Loteria.h"
#include "Vstup.h"
#include "Vystup.h"
#include "Losovanie.h"

void Tah(MUINT celkovyPocetZrebov, MUINT pocetLosovanychZrebov)
{
	if (!celkovyPocetZrebov || !pocetLosovanychZrebov) {
		return;
	}
	if (pocetLosovanychZrebov > celkovyPocetZrebov) {
		pocetLosovanychZrebov = celkovyPocetZrebov;
	}
	AlokujZreby(celkovyPocetZrebov);
	PripravZreby(celkovyPocetZrebov);
	Losuj(celkovyPocetZrebov, pocetLosovanychZrebov);
	Vypis(pocetLosovanychZrebov);
	ZrusZreby();
}
