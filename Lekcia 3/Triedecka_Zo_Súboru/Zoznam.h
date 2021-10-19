#pragma once
#include "Data.h"

typedef int (*PorovnajPtr)(const void* data1, const void* data2);

class Zoznam
{
private:
	Data* zaciatok = nullptr;
public:
	void Uposriadaj(const char* menoSuboru, PorovnajPtr porovnaj);
	void Uloz(const char* menoSuboru);
	void Vypis();
private:
	void ZaradHodnotuDoZoznamu(DataTyp aHodnota, PorovnajPtr porovnaj);
};

