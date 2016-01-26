#include "general.h"


void init01(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void display01(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);

        glVertex2i(280, 190);
        glVertex2i(320, 128);
        glVertex2i(239, 67);
        glVertex2i(194, 101);
        glVertex2i(129, 83);
        glVertex2i(75, 73);
        glVertex2i(74, 74);
        glVertex2i(20, 10);
    glEnd();
    glFlush();
}




