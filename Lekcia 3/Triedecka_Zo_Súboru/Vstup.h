#pragma once
#include <cstdio>
#include "Data.h"
class Vstup
{
private:
	FILE* fHandle = nullptr;
public:
	Vstup(const char* menoSuboru);
	~Vstup();
	DataTyp Citaj();
};

