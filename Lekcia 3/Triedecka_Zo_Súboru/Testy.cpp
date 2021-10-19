#include "Testy.h"
#include "Vstup.h"
#include "Vystup.h"

bool Testy::Start()
{
    Vstup citac("data.txt");
    DataTyp x = citac.Citaj();
    Vystup zapisovac("data.out");
    Vystup displej(nullptr);
    zapisovac.Zapis(x);
    displej.Zapis(x);
    return true;
}
