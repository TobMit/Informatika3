#pragma once
typedef int DataTyp;
const DataTyp NEPLATNAHODNOTA = 0;

int Porovnaj(const void* data1, const void* data2);
int PorovnajKlesajuco(const void* data1, const void* data2);

class Data
{
private:
	DataTyp hodnota = 0;
	Data* nasledovnik = nullptr;
public:
	Data(DataTyp aHodnota, Data* aNasledovnik);
	DataTyp Hodnota() { return hodnota; }
	Data* Nasledovnik() { return nasledovnik; }
	void Nasledovnik(Data* aNasledovnik) { nasledovnik = aNasledovnik; }
};

