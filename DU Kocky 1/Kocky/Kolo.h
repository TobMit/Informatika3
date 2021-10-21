#pragma once
class Kolo
{
public:
	int Hraj();
private:
	int VygenerujCislo();
	int VypocitajBody(int prvaKocka, int druhaKocka, int tretiaKocka);
	void vypisSkore(int prvaKocka, int druhaKocka, int tretiaKocka, int body);

};

