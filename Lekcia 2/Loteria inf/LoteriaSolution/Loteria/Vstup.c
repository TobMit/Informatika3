#include "Vstup.h"
//#include <cstddef>

void PripravZreby(MUINT celkovyPocetZrebov)
{
	if (zreby)
	{
		for (MUINT i = 0; i < celkovyPocetZrebov; i++)
		{
			zreby[i].cislo = i + 1;
			zreby[i].kod = 65 + (i % 26);
		}
	}
	
}
