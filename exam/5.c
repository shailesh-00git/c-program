#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");
    circle(200, 200, 100);
    rectangle(100, 100, 300, 250);
    getch();
    closegraph();
    return 0;
}
