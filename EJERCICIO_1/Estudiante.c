
#include "Estudiante.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void estructuras() {

    // Instanciación de la estructura
    struct Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    //Instanciación con malloc

    struct Estudiante *estudiante2 = (struct Estudiante *)malloc(sizeof(struct Estudiante));
    if (estudiante2 == NULL) {
        fprintf(stderr, "Error al asignar memoria\n");
        exit(1);
    }
    strcpy(estudiante2->nombre, "Ana");   // Asignar nombre
    estudiante2->edad = 22;                // Asignar edad
    estudiante2->promedio = 9.8;           // Asignar promedio


    // Punteros y estructuras
    struct Estudiante *punteroEst = &estudiante1;

    // Imprimir datos del estudiante1 usando puntero
    printf("Datos del estudiante 1:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    // Imprimir datos del estudiante2
    printf("Datos del estudiante 2:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante2->nombre, estudiante2->edad, estudiante2->promedio);

    // Liberar la memoria asignada para estudiante2
    free(estudiante2);
}