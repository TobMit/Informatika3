#pragma once
#include <cstdio>
#include "Data.h"
class Vystup
{
private:
	FILE* fHandle = nullptr;
public:
	Vystup(const char* menoSuboru);
	~Vystup();
	DataTyp Zapis(DataTyp data);
};

