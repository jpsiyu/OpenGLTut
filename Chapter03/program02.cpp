#include "general.h"

void drawSinc(void){
    glBegin(GL_LINE_STRIP);
    for(float x = -4.0; x < 4.0; x += 0.1){
        if (x == 0.0)
            glVertex2f(0.0, 1.0);
        else
            glVertex2f(x, sin(3.14159*x)/(3.14159*x));
    }
    glEnd();
}

void display02(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            glViewport(i*64, j*48, 64, 48);
            drawSinc();
        }
    }
    drawSinc();
    glFlush();
}
