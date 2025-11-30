#include <graphics.h>
#include <iostream>
using namespace std;

int main() {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int xmax = getmaxx();
    int ymax = getmaxy();

    // Outer rectangle:
    rectangle(5, 5, xmax - 5, ymax - 5);

    // Two inner vertical pillars (left & right)
    // Keeping 60px width for pillars
    int pillarWidth = 60;

    // Left pillar
    rectangle(5, 5, 5 + pillarWidth, ymax - 5);

    // Right pillar
    rectangle(xmax - 5 - pillarWidth, 5, xmax - 5, ymax - 5);

    // Top inner line between pillars (C to E)
    line(5 + pillarWidth, 5, xmax - 5 - pillarWidth, 5);

    // Bottom inner line (D to F)
    line(5 + pillarWidth, ymax - 5, xmax - 5 - pillarWidth, ymax - 5);

    // Center point I
    int cx = (xmax) / 2;
    int cy = (ymax) / 2;

    // Circle of radius 10
    circle(cx, cy, 50); // using 50 so figure looks visible

    // Horizontal line through circle center (G to H)
    line(5 + pillarWidth, cy, xmax - 5 - pillarWidth, cy);

    // Labels (optional)
    outtextxy(5, 5, (char*)"A(5,5)");
    outtextxy(10, 5, (char*)"C(10,5)");
    outtextxy(xmax - 100, 5, (char*)"E");
    outtextxy(5, ymax - 10, (char*)"D");
    outtextxy(xmax - 80, ymax - 10, (char*)"B");
    outtextxy(cx, cy - 60, (char*)"R=10");

    getch();
    closegraph();
    return 0;
}
