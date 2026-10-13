#include "zasobnik.h"
#include "util.h"

void zasobnik_init(Zasobnik *z)
{
    z->pocet = 0;
}

int zasobnik_push(Zasobnik *z, int hodnota)
{
    if (z->pocet >= KAPACITA) {
        vypis_chybu("zasobnik je plny");
        return 0;
    }
    z->data[z->pocet] = hodnota;
    z->pocet++;
    return 1;
}

int zasobnik_pop(Zasobnik *z, int *hodnota)
{
    if (z->pocet == 0) {
        vypis_chybu("zasobnik je prazdny");
        return 0;
    }
    z->pocet--;
    *hodnota = z->data[z->pocet];
    return 1;
}
