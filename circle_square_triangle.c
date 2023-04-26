#include <stdio.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
// #include <graphics.h>

const int WIDTH = 800;
const int HEIGHT = 600;
const int FRAME_DELAY = 50; 
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x1, y1, x3, y3);
}
void drawSquare(int x1, int y1, int x2, int y2) {
    rectangle(x1,x2-y2,y1+x1/2,y2);
}
void drawCircle(int x, int y, int r) {
   circle(x,y,r/2);
}

int main() {
int gd = DETECT, gm;
initwindow(WIDTH,HEIGHT);
    int x1 = WIDTH / 2;
    int y1 = HEIGHT / 2 - 100;
    int x2 = x1 - 100;
    int y2 = y1 + 100;
    int x3 = x1 + 100;
    int y3 = y1 + 100;
    int r = 100;

    for (int i = 0; i < 10; i++) {
        drawTriangle(x1, y1, x2, y2, x3, y3);
        usleep(FRAME_DELAY * 10000);
        cleardevice();
        drawSquare(x2, y2, x3, y3);
        usleep(FRAME_DELAY * 10000);
        cleardevice();
        drawCircle(x1, y1, r);
        usleep(FRAME_DELAY * 10000);
        cleardevice();
    }
	getch();
	closegraph();
    return 0;
}
