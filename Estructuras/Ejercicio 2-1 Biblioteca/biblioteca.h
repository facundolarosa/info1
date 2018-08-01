#ifndef BIBLIOTECA_INC
#define BIBLIOTECA_INC


/* Definición de constantes */

#define MAX 50
#define ARCHIVO_INV "biblioteca.bin"
#define LARGO_STR 60


/* Definición de tipos de datos */

typedef struct{
	char nombre[LARGO_STR], estanteria;
	unsigned int codigo, cantidad, posicion;
}libro_t;


/* Prototipos de funciones */

/* Función: cargarInventario
 * Recibe: 
 * 	- libros: Vector de tipo libro_t donde se cargará el inventario
 * 	- max: Tamaño del vector libros
 * Devuelve:
 *	- cantidad de libros cargados en caso de tener éxito
 *	- (-1) si ocurre un error
 */
int cargarInventario(libro_t *libros,int max);


#endif // BIBLIOTECA_INC
