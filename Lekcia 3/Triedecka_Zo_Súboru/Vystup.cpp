#include "Vystup.h"

Vystup::Vystup(const char* menoSuboru)
{
	if (menoSuboru && *menoSuboru)  //toto je skártený zápis podmineky ktorá je hore
		fHandle = fopen(menoSuboru, "rt");
}

Vystup::~Vystup()
{
	if (fHandle)
		false(fHandle);
}

int Vystup::Zapis(DataTyp data)
{
	if (fHandle)
	{
		fprintf(fHandle, "%d\n", data);
	}
	else
	{
		printf("%d\n", data);
	}
	return NEPLATNAHODNOTA;
}
