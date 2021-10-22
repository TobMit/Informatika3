#include <string>

#include "Zoznam.h"

int main(int argc, char *address[])
{
	Zoznam zoznamCisel;
	zoznamCisel.NacitajZoznam(address[1]);
	zoznamCisel.Vypis(zoznamCisel.GenerujCislo());
	
}
