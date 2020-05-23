//
// Created by pcv on 23/05/2020.
//

#include "menu.h"


int MENU_showMenu() {

    int opcion;

    printf("\n\nBienvenido!\n\n");

    do {
        printf("\nPor favor, introduce la opcion que deseas:\n");
        printf("(1) Introducir fichero de configuracion\n");
        printf("(2) Jugar)\n");
        printf("(3) Mostrar ranking\n");
        printf("(4) Exit\n");
        printf("\n\nOpcion: ");
        scanf("%d", &opcion);



        switch (opcion) {

            case 1:
                cargarConfig();
                break;
            case 2:
//                jugar();
                break;
            case 3:
                mostrarRank();
                break;
            case 4:
                printf("!Gracias por jugar a nuestro juego!\n");
                break;
        }

    }while(opcion !=4);

    return opcion;
}
