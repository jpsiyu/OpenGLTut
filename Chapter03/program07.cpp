#include "general.h"

void initCT(void){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void scale2D(double sx, double sy){
    glMatrixMode(GL_MODELVIEW);
    glScaled(sx, sy, 1.0);
}

void translate2D(double dx, double dy){
    glMatrixMode(GL_MODELVIEW);
    glTranslated(dx, dy, 1.0);
}

void rotate2D(double angle){
    glMatrixMode(GL_MODELVIEW);
    glRotated(angle, 0.0, 0.0, 1.0);
}

void drawRect(void){
    glBegin(GL_LINE_LOOP);
    glVertex2i(0, 0);
    glVertex2i(100, 0);
    glVertex2i(100, 100);
    glVertex2i(0, 100);
    glEnd();
    glFlush();
}

void init07(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 1.0f);
    glLineWidth(2.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void display07(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawRect();
    translate2D(60, 50);
    drawRect();
    rotate2D(-30.0);
    drawRect();
    scale2D(2.0, 1.5);
    drawRect();
}


