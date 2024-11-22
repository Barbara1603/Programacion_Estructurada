cmake_minimum_required(VERSION 3.29)
project(Programacion_Estructurada C)

set(CMAKE_C_STANDARD 11)

include_directories(EJERCICIO_1)

add_executable(Programacion_Estructurada
    EJERCICIO_1/Estudiante.c
    EJERCICIO_1/Estudiante.h
        main.c
        main.h
        EJERCICIO_2/Uniones.c
        EJERCICIO_2/Uniones.h
        EJERCICIO_3/Copia_Estructura.h
        EJERCICIO_4/Alias.c
        EJERCICIO_4/Alias.h
        EJERCICIO_5/Funciones.c
        EJERCICIO_5/Funciones.h
)
