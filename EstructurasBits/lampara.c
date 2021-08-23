#include "lampara.h"

typedef struct{
    unsigned int corriente: 10;
    unsigned int lampara: 5;
    unsigned int valido: 1;
} bits_s;

typedef union{
    unsigned char puerto[2];
    bits_s bits;
} bits_u;

puerto_t empaquetar (lampara_t lampara)
{
    puerto_t puerto;
    return puerto;
}

lampara_t desempaquetar (puerto_t puerto)
{
    lampara_t lampara;
    bits_u bits_union;

    //1. Cargamos los datos de los puertos en la unión

    bits_union.puerto[0]=puerto.byte[0];
    bits_union.puerto[1]=puerto.byte[1];

    //2. Sacamos los datos de los campos de bits a través de la estructura (dentro de la unión)
    //   y los asignamos a la estructura que devolverá la función

    lampara.corriente=bits_union.bits.corriente;
    lampara.numero=bits_union.bits.lampara;
    lampara.valido=bits_union.bits.valido;

    return lampara;
}
