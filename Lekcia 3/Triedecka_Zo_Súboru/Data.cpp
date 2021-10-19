#include "Data.h"

Data::Data(DataTyp aHodnota, Data* aNasledovnik)
{
	hodnota = aHodnota;
	nasledovnik = aNasledovnik;
}

int Porovnaj(const void* data1, const void* data2)
{
	DataTyp* dptrdata1 = (DataTyp*)data1;
	DataTyp* dptrdata2 = (DataTyp*)data2;

	return *dptrdata1 - *dptrdata2;
}

int PorovnajKlesajuco(const void* data1, const void* data2)
{
	return -Porovnaj(data2, data1);
}
