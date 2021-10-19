//#define TESTY
#ifdef TESTY
#include "Testy.h"
#endif // !Testy
#include "Zoznam.h"


int main()
{
	bool OK = true;

	//ked nepotrebujem testova� tak zakomentujem define TEST a toto sa nebude vykon�va�
#ifdef TESTY
	Testy test;
	OK = test.Start();
#endif
	if (OK)
	{
		Zoznam utriedenZoznam;
		utriedenZoznam.Uposriadaj("data.txt", PorovnajKlesajuco);
		utriedenZoznam.Vypis();
		utriedenZoznam.Uloz("data.out");
	}
	return 0;
}