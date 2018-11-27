#include <allegro.h>
#include<stdlib.h>//numeros alazar
#include<time.h>//crear numeros mas rapido
#include "inicia.h"
#include "disparos.h"
#include"personajes.h"
#include"disenio.h"


#define ANCHO 600
#define ALTO  600


int main(){
    srand(time(NULL));//genera numeros alazar
    inicia_allegro(ANCHO,ALTO); // fuciones del include inicia.h
	inicia_audio(70,70);        //

    BITMAP *buffer = create_bitmap(ANCHO, ALTO);//imprimir todas las imagenes
    BITMAP *portada =load_bitmap("Recursos/portada.bmp",NULL);
    BITMAP *fondo =load_bitmap("Recursos/fondo.bmp",NULL);
    BITMAP *img_muros=load_bitmap("Recursos/escudos.bmp",NULL);
    PORTADA(portada);//llamando a la funcion)

    NAVE N;//nombre de la nave
    N.inicia("Recursos/nave.bmp","Recursos/Bala2.bmp",6,12,30,20,ANCHO/2,ALTO-70,-8,0,3);
    NAVE E[60];//arreglo
    acomoda_enemigos(E);
    Balas disparos[N.max_disp];//disparos de la nave
    Balas disp_E[E[0].max_disp];//disparos del enemigo
    escudo ES[30];
    iniciar_escudo(ES);
    int azar=rand()%55;
    int mov=0;

    while(!key[KEY_ESC]){
        clear_to_color(buffer,0x000000);//para imprimir
        pintar_escudos(ES,img_muros,buffer);
        N.pinta(buffer,0,0);
        N.mueve();
        if(key[KEY_SPACE]&&N.temporizador(5))
        crear_bala(N.n_disp,N.max_disp,disparos,N.x,N.y,N.dir_bala);
        N.dispara(disparos, buffer);
        for(int i=0;i<55;i++)
        if(elimina_bala_objeto(N,E[i],disparos)){
            explocion1(E[i],buffer);
            eliminar_bala_escudo(N,ES,disparos);
        }


        pintar_enemigo(E,buffer,mov);
        crear_bala(N.n_disp,N.max_disp,disparos,N.x,N.y,N.dir_bala);
        E[azar].dispara(disp_E,buffer);

        if(elimina_bala_objeto(E[azar],N,disp_E))
        explicion2(N,buffer,fondo);
        eliminar_bala_escudo(E[azar],ES,disp_E);

        imprimir_fondo(fondo,buffer);
        blit(buffer,screen,0,0,0,0,ANCHO,ALTO);
        rest(20);//tiempo
    }


	return 0;
}
END_OF_MAIN();

