#define CONSTANTE 32

void pasarMayuscula(char * p)
{
    if(*p>='a' && *p<='z')
        *p=*p-CONSTANTE;
}
