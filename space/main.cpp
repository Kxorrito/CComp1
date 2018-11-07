#include <iostream>
#include<stdio.h>
#include<windows.h>//posicion para el cursor
#include<conio.h>//sirve para dtectar si se preiona las teclas
#include "NAVE.h"
#include "ASTEROIDE.h"
#include<stdlib.h>



using namespace std;

void gotoxy(int x, int y){ //funcion de libreria windows
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); //es recuperar el identificador de la consola y tiene un parametro donde especifica el control de la consola
    COORD dwPos; //la estructura se llama Coord Y creamos un objeto de esa estructura (hacemos referenica que sus valores son una posicion)
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);//esta funcion toma el control de la consola pasarle coodenadas
}


void ocultarcursor(){
     HANDLE hCon;
     hCon = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_CURSOR_INFO cci;//estructura
     cci.dwSize = 50;//estamos llamando asu atrivuto
     cci.bVisible = FALSE;//que cursor se mostrara en pantalla si es verdadero
     SetConsoleCursorInfo(hCon,&cci);//podemos controlar las caracteristicas de nuestro cursor


}
void pintar_limites(){
    for(int i=2;i<78;i++){
        gotoxy(i,3);printf("%c",205);
        gotoxy(i,23);printf("%c",205);
    }
    for(int i=4;i<23;i++){
         gotoxy(2,i);printf("%c",186);
          gotoxy(77,i);printf("%c",186);
    }
    gotoxy(2,3);printf("%c",201);
    gotoxy(2,33);printf("%c",200);
    gotoxy(77,3);printf("%c",187);
    gotoxy(77,33);printf("%c",188);

}
int main()
{
    ocultarcursor();
    pintar_limites();
    NAVE N(7,7,3,3);
    N.pintar();
    N.pintar_corazones();
    bool game_over=false;

    //ASTEROIDE ast(10,4);
    while(!game_over){ //que se ejecute siempre y cuando la variable game_over sea falsa
            //ast.mover();
            N.morir();
            N.mover();
            Sleep(30);
    }
    return 0;
}
