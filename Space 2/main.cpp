#include<stdio.h>
#include<windows.h>//posicion para el cursor
#include<conio.h>//sirve para dtectar si se preiona las teclas
#include<stdlib.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

using namespace std;

void gotoxy(int x, int y){//funcion de libreria windows
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);//es recuperar el identificador de la consola y tiene un parametro donde especifica el control de la consola
    COORD dwPos;//la estructura se llama Coord Y creamos un objeto de esa estructura (hacemos referenica que sus valores son una posicion)
    dwPos.X=x;
    dwPos.Y=y;

    SetConsoleCursorPosition(hCon,dwPos);//esta funcion toma el control de la consola pasarle coodenadas

}

void OcultarCursor(){
    HANDLE hCon;
    hCon=GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cci;
    cci.dwSize=2;//estamos llamando asu atrivuto
    cci.bVisible=false;//que cursor se mostrara en pantalla si es verdadero

    SetConsoleCursorInfo(hCon,&cci);//podemos controlar las caracteristicas de nuestro cursor;
}

void pintar_limites(){
    for(int i=2; i<78; i++){
        gotoxy(i,3);printf("%c",205);
        gotoxy(i,33);printf("%c",205);
    }
    for(int i=4;i<33;i++){
        gotoxy(2,i);printf("%c",186);
        gotoxy(77,i);printf("%c",186);
    }
    gotoxy(2,3);printf("%c",201);
    gotoxy(2,33);printf("%c",200);
    gotoxy(77,3);printf("%c",187);
    gotoxy(77,33);printf("%c",188);

}

class Nave{
    int x,y;
    int corazones;
    int vidas;
public:
    Nave(int _x, int _y, int _corazones, int _vidas):x(_x),y(_y),corazones(_corazones), vidas(_vidas){}//constructor estos valores los pasamos a sus coordenadas
    int X(){return x;}
    int Y(){return y;}
    void Corazon(){corazones--;}//cuando haiga colision los corazones disminuyan
    void pintar();
    void borrar();
    void mover();
    void pintar_corazones();
    void morir();

};


void Nave::pintar(){
    gotoxy(x,y);printf("  %c",30);
    gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
    gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);

}
void Nave::borrar(){
    gotoxy(x,y);  printf("        ");
    gotoxy(x,y+1);printf("        ");
    gotoxy(x,y+2);printf("        ");
}

void Nave::mover(){
    if(kbhit()){
            char tecla=getch();//getch es la funcion que guarda la tecla que se presione
            borrar();
            if(tecla==IZQUIERDA && x>3)x--;// si se presiona la tecla IZQUIERDA vamos a mover LA NAVE una posicion hacia la izquierda
            if(tecla==DERECHA && x+6 < 77)x++;// si se presiona la tecla DERECHA vamos a mover el LA NAVE una posicion hacia la izquierda
            if(tecla==ARRIBA && y > 4) y--;// si se presiona la tecla ARRIBA vamos a mover el LA NAVE una posicion hacia la izquierda
            if(tecla==ABAJO && y+3 < 33) y++;// si se presiona la tecla ABAJO vamos a mover el LA NAVE una posicion hacia la izquierda
            if(tecla=='e')corazones--;
            pintar();
            pintar_corazones();
        }
}

void Nave::pintar_corazones(){
    gotoxy(50,2);printf("VIDAS %x",vidas);
    gotoxy(64,2);printf("Salud");
    gotoxy(70,2);printf("      ");
    for(int i=0;i<corazones;i++){
        gotoxy(70+i,2);printf("%c",3);
    }
}

void Nave::morir(){
    if(corazones==0){
        borrar();
        gotoxy(x,y);  printf("   **   ");
        gotoxy(x,y+1);printf("  ****  ");
        gotoxy(x,y+2);printf("   **   ");
        Sleep(200);

        borrar();
        gotoxy(x,y);  printf(" * ** *");
        gotoxy(x,y+1);printf("  **** ");
        gotoxy(x,y+2);printf(" * ** *");
        Sleep(200);
        borrar();
        vidas--;
        corazones=3;
        pintar_corazones();
        pintar();
    }
}

class Asteroide{
    int x,y;
public:
    Asteroide(int _x,int _y): x(_x),y(_y){}
    void pintar();
    void mover();
    void choque(class Nave &N);
};
void Asteroide::pintar(){
    gotoxy(x,y);printf("%c",184);
}
void Asteroide::mover(){
    gotoxy(x,y);printf(" ");
    y++;
    if(y>32){
        x=rand()%71+4;
        y=4;
    }
    pintar();
}

void Asteroide::choque(class Nave &N){
    if(x>=N.X()&& x<N.X()+5 && y>=N.Y() && y<=N.Y()+2){
        N.Corazon();
        N.borrar();
        N.pintar();
        N.pintar_corazones();
        x=rand()%71+4;
        y=4;
    }
}

int main(){
    OcultarCursor();
    pintar_limites();
    Nave N(7,7,3,3);
    N.pintar();
    N.pintar_corazones();
    Asteroide ast1(10,4),ast2(4,8),ast3(15,10),ast4(20,15),ast5(13,19);
    bool game_over=false;
    while(!game_over){//que se ejecute siempre y cuando la variable game_over sea falsa
        ast1.mover();ast1.choque(N);
        ast2.mover();ast2.choque(N);
        ast3.mover();ast3.choque(N);
        ast4.mover();ast4.choque(N);
        ast5.mover();ast5.choque(N);
        N.morir();
        N.mover();
        Sleep(30);
    }
    return 0;

}


