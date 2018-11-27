#include"personajes.h"
#include"disparos.h"
#include"disenio.h"
#include<allegro.h>

#define ANCHO 600
#define ALTO  600

void NAVE::inicia(char* ruta_nave, char* ruta_bala,int _ancho_b,int _alto_b,
                  int _ancho_p,int _alto_p,int _x,int _y, int _dir_bala, int _tipo,int _vida){
    x=_x; y=_y;
    n_disp=0; max_disp = 2;
    img_nav =load_bitmap(ruta_nave,NULL);
    img_bala =load_bitmap(ruta_bala,NULL);
    tick=0;
    ancho_b=_ancho_b;
    alto_b=_alto_b;
    ancho_p=_ancho_p;//ancho del personaje
    alto_p=_alto_p;//alto del personaje
    dir_bala=_dir_bala;
    tipo=_tipo;
    vida=_vida;
    exp_enem=load_bitmap("Recursos/pum_enemigo.bmp",NULL);

}

bool NAVE::temporizador(int tiempo){
    tick++;
    if(tick==tiempo){
        tick=0;
        return true;//cada que tick sea sea 0
    }
    return false;
}
void NAVE::pinta(BITMAP* buffer,int ix, int iy){
    masked_blit(img_nav,buffer,ix*ancho_p,iy*alto_p,x,y,ancho_p,alto_p);//para imprimir la nave
}
void NAVE::mueve(){
    if(key[KEY_LEFT])x-=5;
    if(key[KEY_RIGHT])x+=5;
}
void NAVE::dispara(struct Balas disparos[],BITMAP* buffer){
        if(tipo)
        crear_bala(n_disp,max_disp,disparos,x,y,dir_bala);
        pintar_bala(n_disp,max_disp,disparos,buffer,img_bala,ancho_b,alto_b);
        elimina_bala(n_disp,max_disp,disparos,ANCHO,ALTO);
}
void acomoda_enemigos(struct NAVE E[]){
    int indice=-1;
    int _tipo=0;
    for(int i=0;i<5;i++){
            _tipo++;
            if(_tipo==4)_tipo=1;
            for(int j=0;j<11;j++){//cada fila tiene enemigos
                indice++;
                E[indice].inicia("Recursos/enemigos.bmp","Recursos/Bala_enem.bmp",6,12,25,20,140+j*30,130+i*24,8,_tipo,1);//iniciando a los enemigos

        }
    }
}

void pintar_enemigo(struct NAVE E[],BITMAP* buffer,int mov){
    int indice=-1;
    for(int i=0;i<5;i++){
        for(int j=0;j<11;j++){//cada fila tiene enemigos
            indice++;
            if (E[indice].vida>0)
            E[indice].pinta(buffer,mov,E[indice].tipo-1);
        }
    }
}
void explocion1(struct NAVE E,BITMAP* buffer){
    BITMAP* parche=create_bitmap(25,20);
    clear_to_color(parche,0x000000);
    blit(parche,buffer,0,0,E.x,E.y,25,20);
    masked_blit(E.exp_enem,buffer,0,0,E.x -10,E.y,41,34);
}

void explicion2(struct NAVE N,BITMAP* buffer,BITMAP* fondo){
    BITMAP* parche=create_bitmap(30,20);
    clear_to_color(parche,0x000000);
    for(int j=0;j<6;j++){//cuantas veces se hara la animacion de la nave
        for(int i=1;i<=2;i++){//controlar la imagenen de la nave durante su explosicion
            blit(parche,buffer,0,0,N.x,N.y,30,20);
            masked_blit(N.img_nav,buffer,i*30,0,N.x,N.y,30,20);
            imprimir_fondo(fondo,buffer);
            blit(buffer,screen,0,0,0,0,ANCHO,ALTO);
            rest(50);
        }
    }
}
void iniciar_escudo(struct escudo muros[]){
    char pos_muros[3][22] = {//matriz de caracteres
        "AEC  AEC  AEC  AEC", //2X20
        "B D  B D  B D  B D",
    };
    int r=0;
    for(int i=0;i<21;i++){
        for(int j=0;j<1;j++){
            if(pos_muros[j][i] !=' '){
                muros[r].x=90+i*20;//nos da la dimension que tiene el muro
                muros[r].y=450+j*15;//la dimension que tiene el muro en y
                muros[r].dan=0;
                if(pos_muros[j][i]=='A'){
                    muros[r].tipo=0;
                }
                if(pos_muros[j][i]=='B'){
                    muros[r].tipo=1;
                }
                if(pos_muros[j][i]=='C'){
                    muros[r].tipo=2;
                }
                if(pos_muros[j][i]=='D'){
                    muros[r].tipo=3;
                }
                if(pos_muros[j][i]=='E'){
                    muros[r].tipo=4;
                }
                r++;
            }
        }
    }

}
void pintar_escudos(struct escudo ES[],BITMAP* img_mur,BITMAP* buffer){
    for(int i=0;i<20;i++){
            if(ES[i].dan!=3){//ára dejar de pintar el muro
                    masked_blit(img_mur,buffer,ES[i].dan*20,ES[i].tipo*16,ES[i].x,ES[i].y,20,16);
            }
    }

}
void crear_bala_enemigo(struct NAVE E[],int &azar,int&mov){
   if(E[0].temporizador(10))
    if(++mov==2)mov=0;
   if(E[azar].n_disp==0) {
    azar=rand()%55;
    while(E[azar].vida==0)azar=rand()%55;
   }
}
