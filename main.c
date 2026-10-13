#include <stdio.h>
#include "zasobnik.h"

int main(void)
{
    Zasobnik z;
    int hodnota;

    zasobnik_init(&z);

    for (int i = 1; i <= KAPACITA + 1; i++) {
        zasobnik_push(&z, i * 10);
    }

    while (z.pocet > 0) {
        zasobnik_pop(&z, &hodnota);
        printf("%d\n", hodnota);
    }
    return 0;
}
