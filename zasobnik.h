#ifndef ZASOBNIK_H
#define ZASOBNIK_H

#include "konstanty.h"

typedef struct {
    int data[KAPACITA];
    int pocet;
} Zasobnik;

void zasobnik_init(Zasobnik *z);
int zasobnik_push(Zasobnik *z, int hodnota);   // 1 = ok, 0 = zasobnik je plny
int zasobnik_pop(Zasobnik *z, int *hodnota);   // 1 = ok, 0 = zasobnik je prazdny

#endif
