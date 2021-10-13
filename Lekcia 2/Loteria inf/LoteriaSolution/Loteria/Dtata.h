#pragma once

//#define MUINT unsigned int   //- toto preprocesor nahradí všade kde sa MUINT nachádza

#ifdef WIN32
typedef unsigned int MUINT;  // - toto zabezpeèuje prekladaè, keby spravím nejakú chybu tak ma na to prekladaè upozorní
#else
typedef unigned short int MUINT;
#endif
struct Zreb
{
	MUINT cislo;
	char kod;
};

extern struct Zreb* zreby;

void AlokujZreby(MUINT celkovyPocetZrebov);
void ZrusZreby();