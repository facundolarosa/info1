#ifndef LAMPARA_H_INCLUDED
#define LAMPARA_H_INCLUDED

typedef struct
{
    char byte[2];
}puerto_t;

typedef struct
{
    int corriente;
    int numero;
    int valido;
}lampara_t;

puerto_t empaquetar (lampara_t lampara);
lampara_t desempaquetar (puerto_t puerto);

#endif // LAMPARA_H_INCLUDED
