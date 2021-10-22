#pragma once
#include <cstdio>
#include <string>

class Zoznam
{
public:
	void NacitajZoznam(const char* menoSuboru);
	void Vypis(int vygenerovaneCislo);
	int GenerujCislo();
private:
	FILE* fHandle = nullptr;
	int* data;
	int pocetVstupov;
};

