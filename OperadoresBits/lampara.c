#include "lampara.h"

//typedef struct
//{
 //   char byte[2];
//}puerto_t;

//byte[0] : byte menos significativo (LSB)
//byte[1] : byte más significativo (MSB)

#define SHIFT_BYTE 8

#define SHIFT_I 0
#define SHIFT_N 10
#define SHIFT_V 15

#define MASK_I 0x03FF
#define MASK_N 0x001F
#define MASK_V 0x0001

lampara_t desempaquetar (puerto_t puerto)
{
    lampara_t lampara;

    unsigned int bitfield=0;

    //1. Ubicar el byte más significativo en la variable 'bitfield'
    bitfield=puerto.byte[1];

    //2. Desplazar el byte más significativo ocho bits a la izquierda
    bitfield=bitfield<<SHIFT_BYTE;

    //3. Integrar/unir el byte menos significativo
    bitfield=bitfield|puerto.byte[0];

    //4. Extraer los campos de bits

    lampara.corriente   = (bitfield >> SHIFT_I) & MASK_I;
    lampara.numero      = (bitfield >> SHIFT_N) & MASK_N;
    lampara.valido      = (bitfield >> SHIFT_V) & MASK_V;

    //5. Retornar la estructura

    return lampara;
}
