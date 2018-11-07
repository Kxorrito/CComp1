/*#include "ASTEROIDE.h"
#include<windows.h>
#include<stdlib.h>
ASTEROIDE::ASTEROIDE(int _x, int _y)
{
    x= _x;
    y= _y;
}

void ASTEROIDE::pintar(){
    gotoxy(x,y);printf("%c",184);

}
void ASTEROIDE::mover(){
    gotoxy(x,y);printf(" ");
    y++;
    if(y>32){
        x=rand()%71+4;
        y=4;
    }
    pintar();
}
*/
