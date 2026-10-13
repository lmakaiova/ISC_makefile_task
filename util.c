#include <stdio.h>
#include "util.h"

void vypis_chybu(const char *zprava)
{
    fprintf(stderr, "Chyba: %s\n", zprava);
}
