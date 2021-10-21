#include "main.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "Kolo.h"

int main()
{
	srand(time(NULL)); // mal by sa iba raz poËas celÈho programu vyvol·vaù
	Kolo koloHry;
	int celkovyPocetBodov = 0;
	for (int i = 0; i <= 10; ++i)
	{
		celkovyPocetBodov += koloHry.Hraj();
	}

	printf("\n----------------------------------\n  Celkovy pocet bodov: %d\n", celkovyPocetBodov);
	return 0;
}