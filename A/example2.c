/*Write a program to draw a line passing from a point (0,50) to another point (200,300)*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm, errCode;

    initgraph(&gd, &gm, "C:\\TC\\BGI");
    errCode = graphresult();

    if (errCode != grOk) {
        printf("\nGraphics Initialization failure!!!!");
        exit(1);
    }

    setcolor(GREEN);
    line(0, 50, 200, 300);

    getch();
    closegraph();
    return 0;
}
