#include "Zoznam.h"
#include "Vystup.h"
#include "Vstup.h"

void Zoznam::Uposriadaj(const char* menoSuboru, PorovnajPtr porovnaj)
{
	Vstup citac(menoSuboru);
	DataTyp hodnota = citac.Citaj();
	while (hodnota!= NEPLATNAHODNOTA)
	{
		ZaradHodnotuDoZoznamu(hodnota, porovnaj);
		hodnota = citac.Citaj();
	}
}

void Zoznam::Uloz(const char* menoSuboru)
{
	Vystup zapisovac(menoSuboru);
	Data* aktualny = zaciatok;
	while(aktualny)
	{
		zapisovac.Zapis(aktualny -> Hodnota());
		aktualny = aktualny->Nasledovnik();
	}
}

void Zoznam::Vypis()
{
	Uloz(nullptr);
}

void Zoznam::ZaradHodnotuDoZoznamu(DataTyp aHodnota, PorovnajPtr porovnaj)
{
	if (!zaciatok)
		zaciatok = new Data(aHodnota, nullptr);
	else
	{
		Data* predchadzajuci = nullptr;
		Data* aktualny = zaciatok;
		DataTyp aktualnaHodnota = aktualny->Hodnota();
		while (aktualny!= nullptr && porovnaj(&aHodnota, &aktualnaHodnota))
		{
			predchadzajuci = aktualny;
			aktualny = aktualny->Nasledovnik();
			if (aktualny)
				aktualnaHodnota = aktualny->Hodnota();
		}
		Data* novy = new Data(aHodnota, aktualny);
		if (predchadzajuci == nullptr)
			zaciatok = novy;
		else
			predchadzajuci->Nasledovnik(novy);
	}
}
