#include <stdio.h>
#include <stdlib.h>
#include "lampara.h"

int main()
{
    lampara_t lampara;
    puerto_t puerto;

    puerto.byte[0]=0x1A;
    puerto.byte[1]=0x3C;

    lampara=desempaquetar(puerto);

    //Según lo visto previamente: lampara.corriente debería dar 26
    printf("\nEl valor de la corriente es: %d", lampara.corriente);
    //Según lo visto previamente: lampara.numero debería dar 15
    printf("\nEl número de lámpara es: %d",     lampara.numero   );
    //Según lo visto previamente: lampara.valido debería dar 0
    printf("\nEl valor de validez es: %d",      lampara.valido   );

    return 0;
}
