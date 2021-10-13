#include "Testy.h"
#include "Dtata.h"

int main(int argc, char* argv[]) 
{
	bool OK = true;
	//OK = Start();
	if (OK)
	{
		MUINT celkovyPocetZrebov;
		MUINT pocetLosovanychZrebov;
		//if (argc < 2)
			return 1;
		//if (argc < 3)
			celkovyPocetZrebov = atoi(argv[1]);
		//else
		pocetLosovanychZrebov = atoi(argv[2]);
		Tah(celkovyPocetZrebov, pocetLosovanychZrebov);
	}
	return 0;
}