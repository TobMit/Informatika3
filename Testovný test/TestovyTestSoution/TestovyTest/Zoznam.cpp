#include "Zoznam.h"

#include <ctime>

void Zoznam::NacitajZoznam(const char* menoSuboru)
{
	
	fHandle = fopen(menoSuboru, "rt");
	if (fHandle)
	{
		if(!feof(fHandle))
		{
			//int cislo;
			fscanf(fHandle, "%d", &pocetVstupov);
			//printf("%d\n", pocetVstupov);
		}

		data = new int[pocetVstupov];

		for(int i = 0; i < pocetVstupov; i++)
		{
			int cislo = 0;
			fscanf(fHandle, "%d", &cislo);
			data[i] = cislo;
		}
	}
}

void Zoznam::Vypis(int vygenerovaneCislo)
{
	/*for (int i = 0; i < 12; i++)
	{
		printf("%d\n", data[i]);
	}
	printf("Vygenerované cislo je: %d", vygenerovaneCislo);*/
	int cisloNaIndexe = data[vygenerovaneCislo];
	printf("Vygenerovane cislo: %d\n", vygenerovaneCislo);
	printf("Cislo na jeho indexe: %d\n", cisloNaIndexe);

	for(int i = 0; i < pocetVstupov; i++)
	{
		if (data[i] > cisloNaIndexe)
		{
			printf("%d\n", data[i]);
		}
	}


}

int Zoznam::GenerujCislo()
{
	srand(time(NULL));
	return rand() % (pocetVstupov - 1);
}
