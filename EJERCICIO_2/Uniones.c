//
// Created by barba on 22/11/2024.
//

#include "Uniones.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Implementación de la función uniones
void uniones() {
    union Dato dato;

    // Asignación y impresión del entero
    dato.i = 10;
    printf("Valor asignado a dato.i: %d\n", dato.i);

    // Asignación y impresión del flotante
    dato.f = 220.5;
    printf("Valor asignado a dato.f: %.2f\n", dato.f);

    // Asignación y impresión de la cadena
    strcpy(dato.str, "C programming");
    printf("Valor asignado a dato.str: %s\n", dato.str);
}