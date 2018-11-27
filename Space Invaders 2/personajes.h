
#include<allegro.h>

#ifndef PERSONAJES_H_INCLUDED
#define PERSONAJES_H_INCLUDED

struct NAVE{
    int x,y;
    int n_disp;
    int max_disp;
    int tick;//controlar los tiempos de crear la bala
    int ancho_b,alto_b;//ancho de la bala y del jugador
    int ancho_p,alto_p;//alto de la bala y del jugador
    BITMAP* img_nav;
    BITMAP* img_bala;
    BITMAP* exp_enem;
    int dir_bala;//direccion de la bala
    int tipo;//variable de la nave es 0
    int vida;
    void inicia(char* ruta_nave, char* ruta_bala,int _ancho_b,int _alto_b,
                int _ancho_p,int _alto_p,int _x,int _y,int _dir_bala, int _tipo,int _vida);//el movimiento de la nave y bala(constructor)
    bool temporizador(int tiempo);
    void pinta(BITMAP* buffer, int ix,int iy);
    void mueve();//mover personaje
    void dispara(struct Balas[],BITMAP* buffer);//llamando a la estructura
};
void acomoda_enemigos(struct NAVE E[]);
void pintar_enemigo(struct NAVE E[],BITMAP* buffer,int mov);
void explocion1(struct NAVE E,BITMAP* buffer);
void explicion2(struct NAVE N,BITMAP* buffer,BITMAP* fondo);
void crear_bala_enemigo(struct NAVE E[],int &azar,int&mov);

struct escudo{
    int x,y;
    int dan;
    int tipo;
};
void iniciar_escudo(struct escudo muro[]);
void pintar_escudos(struct escudo ES[],BITMAP* img_mur,BITMAP* buffer);
#endif // PERSONAJES_H_INCLUDED



