/*Write a program to draw concentric circles centered at the center the display device*/
#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int gdriver = EGA, gmode=EGALO,x,y,maxx,maxy;
    initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
    setcolor(RED);
    maxx=getmaxx();
    maxy=getmaxy();
    x=maxx/2;
    y=maxy/2;
    circle(x,y,50);
    circle(x,y,75);
    outtextxy(x,y,".");
    getch();
    closegraph();
    return 0;
}
