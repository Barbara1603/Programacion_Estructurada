

#include "Funciones.h"
#include "../EJERCICIO_1/Estudiante.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Ejercicio 5a: Función para imprimir un estudiante
void imprimirEstudiante(struct Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Ejercicio 5b: Función para modificar un estudiante
void modificarEstudiante(struct Estudiante *est) {
    est->edad = 30; // Cambiar la edad a 30 como ejemplo.
}

// Ejercicio 5c: Función para imprimir un estudiante usando puntero.
void imprimirEstudiante2(struct Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

// Función principal para gestionar las operaciones.
void estructura_funciones() {
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan"); // Usar strcpy para asignar cadenas.
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Imprimir datos del estudiante original.
    printf("Datos del estudiante original:\n");
    imprimirEstudiante(estudiante1);

    // Modificar el estudiante.
    modificarEstudiante(&estudiante1);

    // Imprimir datos después de la modificación.
    printf("Datos del estudiante después de modificar:\n");
    imprimirEstudiante2(&estudiante1);
}