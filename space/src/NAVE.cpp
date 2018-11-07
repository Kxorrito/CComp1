#include "NAVE.h"
#include<windows.h>
#include "ASTEROIDE.h"
#include<stdlib.h>
NAVE::NAVE(int _x,int _y,int _corazones,int _vidas){
    x= _x;
    y= _y;
    corazones= _corazones;
    vidas= _vidas;
}

void NAVE::pintar(){
    gotoxy(x,y);printf("  %c",30);
    gotoxy(x,y+1);printf(" %c%c%c ",40,207,41);
    gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);


}

void NAVE::borrar(){
    gotoxy(x,y); printf("         ");
    gotoxy(x,y+1); printf("       ");
    gotoxy(x,y+2); printf("       ");

}
void NAVE::mover(){
            if(kbhit()){
                    char tecla=getch();//getch es la funcion que guarda la tecla que se presione
                    borrar();
                    if(tecla==IZQUIERDA && x>3)x--;// si se presiona la tecla j vamos a mover el * una posicion hacia la izquierda
                    if (tecla==DERECHA && x+6< 77)x++;//si se presiona la tecla l vamos a mover el * una posicion hacia la derecha
                    if(tecla==ARRIBA && y>4)y--;//"""""""""""""""""""""""!"""""hacia arriba
                    if(tecla==ABAJO && y+3<33)y++;//""""""""""""""""""""""""""""""para bajar
                    if(tecla=='e')corazones--;
                    pintar();
                    pintar_corazones();

            }
}
void NAVE::pintar_corazones(){
    gotoxy(50,2);printf("VIDAS %d",vidas);
    gotoxy(64,2);printf("salud");
    gotoxy(70,2);printf("      ");
    for(int i=0;i<corazones;i++){
        gotoxy(70+i,2);printf("%c",3);
    }
}
void NAVE::morir(){
    if(corazones==0){
        borrar();
        gotoxy(x,y);  printf("   **   ");
        gotoxy(x,y+1); printf(" **** ");
        gotoxy(x,y+2); printf("  **  ");
        Sleep(200);

        borrar();
        gotoxy(x,y);printf(" * ** *");
        gotoxy(x,y);printf(" **** ");
        gotoxy(x,y);printf(" * ** *");
        Sleep(200);
        borrar();

        vidas--;
        corazones=3;
        pintar_corazones();
        pintar();
    }

}

void NAVE::gotoxy(int x, int y){ //funcion de libreria windows
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE); //es recuperar el identificador de la consola y tiene un parametro donde especifica el control de la consola
    COORD dwPos; //la estructura se llama Coord Y creamos un objeto de esa estructura (hacemos referenica que sus valores son una posicion)
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);//esta funcion toma el control de la consola pasarle coodenadas
}

