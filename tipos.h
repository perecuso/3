//
// Created by pcv on 23/05/2020.
//

#ifndef INC_3_TIPOS_H
#define INC_3_TIPOS_H

#include <stdio.h>
#include <string.h>

#include "menu.h"
#include "file.h"


typedef struct{
    int posicion_x;
    int posicion_y;
    int cruz_redonda;

}Casilla;

typedef struct{
    char *nombre;
    int victorias;
    int perdidas;
    float porcentaje_ganadas;
}Jugador;

typedef struct{
    Casilla **Casillas;
    Jugador jugador1;
    Jugador jugador2;
}Tablero;

typedef struct{
    Jugador *jugadores;
    Tablero tablero;
}Juego;


#endif //INC_3_TIPOS_H
