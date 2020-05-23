//
// Created by pcv on 23/05/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "file.h"


#define MAXCNAMES 30

void cargarConfig() {

    char aux[MAXCNAMES];
    char c;
    char array[MAXCNAMES];
    int numJugadores=0;
    int longitudN=0;
    int i=0;

    Juego juego;


    FILE *fp;
    fp = fopen("config.txt", "r");

    if (fp == NULL) {

        printf("Error!\n");

    } else {
        fscanf(fp,"%s",aux); // tamaño
        printf("\n%s", aux);

        fscanf(fp,"%s",aux); // jugadores
        printf("\n%s", aux);

        fscanf(fp,"%s",aux); // num jugadores
        c = *aux;
        numJugadores = atoi(&c); //Da error con el compilador de MINGW
        juego.jugadores = (Jugador *)malloc(sizeof(Jugador)*numJugadores);

        printf("\n%d", numJugadores);

        while (numJugadores >0){

            fscanf(fp,"%s",aux); // Texto longitud
            fscanf(fp,"%s",aux); // Texto nombre
            fscanf(fp,"%s",aux); // cantidad letras
            c = *aux;
            longitudN = atoi(&c); //Da error con el compilador de MINGW
            fscanf(fp,"%s",aux); // Texto Nombre
            fscanf(fp,"%s",aux); // Nombre
            juego.jugadores->nombre= (char *) malloc(sizeof(char)*(longitudN+1));
            strcpy(juego.jugadores->nombre,aux);
            printf("\n%s",juego.jugadores->nombre);
            fscanf(fp,"%s",aux); // Texto V
            fscanf(fp,"%d",&juego.jugadores->victorias); // Valor V
            printf("\n%d", juego.jugadores->victorias);
            fscanf(fp,"%s",aux); // Texto P
            fscanf(fp,"%d",&juego.jugadores->perdidas); // Valor P
            printf("\n%d", juego.jugadores->perdidas);

            numJugadores--;
            i++;
        }
    }
}

void mostrarRank(){

    printf("\nRanking:")


}

//notas->alumnos[compt].nombre = (char *)malloc(sizeof(char) *
// strlen(nombre) + 1);
//strcpy(notas->alumnos[compt].nombre, nombre);