#include "general.h"

void init06(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 1.0f);
    glPointSize(2.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void display06(void){
    glClear(GL_COLOR_BUFFER_BIT);
    myPoint point = {10, 20};
    glBegin(GL_POINTS);
    for (float b = 0.0; b < 10.0; b += 0.1){
        myPoint newPoint = {(1-b)*(1-b)*point.x, 2*b*point.y};
        glVertex2f(newPoint.x, newPoint.y);
    }
    glEnd();
    glFlush();
}


