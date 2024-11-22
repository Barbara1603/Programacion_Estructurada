
#include "Alias.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../EJERCICIO_1/Estudiante.h"

// Implementación de la función alias
void alias() {
    typedef struct Estudiante Estudiante; // Definición del alias

    // Creación de un estudiante usando el alias
    Estudiante estudiante3;

    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    // Imprimir los datos del estudiante usando alias
    printf("Datos del estudiante usando alias:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante3.nombre, estudiante3.edad, estudiante3.promedio);
}