#include "general.h"
#include <math.h>

GLfloat A, B, C, D;

void init04(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(2.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, (GLdouble)SCREEN_WIDTH, 0.0, (GLdouble)SCREEN_HEIGHT);
    A = SCREEN_WIDTH/4.0;
    B = 0.0;
    C = D = SCREEN_HEIGHT / 2.0;
}

void display04(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    for(GLdouble x = 0; x < 4.0; x += 0.005){
        GLdouble func = exp(-x) * cos(2*3.1415926*x);
        //glVertex2d(A * x +B, C* func + D);
        //glVertex2d(A*x, func);
        //glVertex2d(A*x, func + D);
        glVertex2d(A*x, func * C);
    }
    glEnd();
    glFlush();
}
