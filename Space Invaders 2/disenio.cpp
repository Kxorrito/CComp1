#include"disenio.h"
#include<allegro.h>

void PORTADA(BITMAP* p){
    int parpadeo=0;//controlar el cambio de los colores
    int y = 0;//dominar la imganen
    int cont=0;//controlar los tiempos
    bool salida=false;
    bool carga=false;
    while(!salida){
        if(parpadeo<25) blit(p,screen,0,y,0,100,600,400);
        else blit(p,screen,600,y,0,100,600,400);
        if(key[KEY_ENTER]){
            y=400;
            carga=true;
        }
        if(carga) cont++;
        if(cont>400)salida=true;

        rest(5);
        if(++parpadeo==50)parpadeo=0;
    }
    clear_to_color(screen,0x000000);
}
void imprimir_fondo(BITMAP* fondo,BITMAP* buffer){
  masked_blit(fondo,buffer,0,0,0,0,600,600);

}
