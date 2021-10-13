#include<stdlib.h>
#include "Dtata.h"
struct Zreb* zreby;

void AlokujZreby(MUINT celkovyPocetZrebov)
{
	zreby = malloc(celkovyPocetZrebov * sizeof(struct Zreb));
}

void ZrusZreby()
{
	free(zreby);
}
