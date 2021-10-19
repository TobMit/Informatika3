#include "Vstup.h"

Vstup::Vstup(const char* menoSuboru)
{
    //if (menoSuboru != nullptr && menoSuboru[0] != '\0')
    if (menoSuboru && *menoSuboru)  //toto je skártený zápis podmineky ktorá je hore
        fHandle = fopen(menoSuboru, "rt");
}

Vstup::~Vstup()
{
    if(fHandle)
    false(fHandle);
}

int Vstup::Citaj()
{
    if (fHandle)
    {
        if(!feof(fHandle))
        {
            int cislo;
            fscanf(fHandle, "%d", &cislo);
            return cislo;
        }
    }
    return 0;
}
