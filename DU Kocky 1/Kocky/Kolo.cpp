#include "Kolo.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>

int Kolo::Hraj()
{
	return VypocitajBody(VygenerujCislo(), VygenerujCislo(), VygenerujCislo());
}

int Kolo::VygenerujCislo()
{
	return rand() % 6 + 1;
}

int Kolo::VypocitajBody(int prvaKocka, int druhaKocka, int tretiaKocka)
{
	int ziskaneBody = 0;

	if (prvaKocka == druhaKocka && druhaKocka == tretiaKocka)
	{
		ziskaneBody = prvaKocka * 100;
	}

	else if ((prvaKocka + 1) == druhaKocka && (druhaKocka + 1) == tretiaKocka)
	{
		ziskaneBody = (prvaKocka + druhaKocka + tretiaKocka) * 100;
	}

	vypisSkore(prvaKocka, druhaKocka, tretiaKocka, ziskaneBody);

	return ziskaneBody;
}

void Kolo::vypisSkore(int prvaKocka, int druhaKocka, int tretiaKocka, int body)
{
	printf("\nHodene cisla: %d %d %d \nZiskane Body %d \n", prvaKocka, druhaKocka, tretiaKocka, body);
}
