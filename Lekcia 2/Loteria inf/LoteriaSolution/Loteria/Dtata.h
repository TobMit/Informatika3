#pragma once

//#define MUINT unsigned int   //- toto preprocesor nahrad� v�ade kde sa MUINT nach�dza

#ifdef WIN32
typedef unsigned int MUINT;  // - toto zabezpe�uje preklada�, keby sprav�m nejak� chybu tak ma na to preklada� upozorn�
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