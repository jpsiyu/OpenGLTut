#include "general.h"

void drawLine(void){
    glBegin(GL_LINE_STRIP);
    glVertex2f(-10.0, 5.0);
    glVertex2f(10.0, 5.0);
    glEnd();
    glFlush();
}


void init08(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 1.0f);
    glLineWidth(2.0);
    glPointSize(2.0);
    setWindow(-100, 100, -100, 100);
    setViewport(0, 640, 0, 480);
}

void display08(void){
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i = 0; i < 6; i++){
        drawLine();
        rotate2D(60);
    }
}

