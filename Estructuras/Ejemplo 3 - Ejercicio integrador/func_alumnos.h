
struct alumno_s
{
	char nombre[30];
	float promedio;
	char sexo;
};

int cargarAlumno(struct alumno_s aux,struct alumno_s * alumnos);
void ordenarAlumno(struct alumno_s * alumnos,int n);
void imprimirAlumnos(struct alumno_s * alumnos,int n,char sexo, int tam);
