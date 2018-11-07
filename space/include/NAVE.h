#ifndef NAVE_H
#define NAVE_H
#include<windows.h>
#include <iostream>
#include<stdio.h>
#include<conio.h>//sirve para dtectar si se preiona las teclas
#include "ASTEROIDE.h"
#include<stdlib.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

class NAVE
{
    int x,y;
    int corazones;
    int vidas;
    public:
        NAVE(int _x,int _y,int _corazones,int _vidas);//constructor estos valores los pasamos a sus coordenadas
        void pintar();
        void mover();
        void borrar();
        void pintar_limites();
        void gotoxy(int x, int y);
        void pintar_corazones();
        void morir();
};



#endif // NAVE_H
