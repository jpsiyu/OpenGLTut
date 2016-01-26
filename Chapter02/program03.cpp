#include "general.h"

GLdouble myFunc(GLdouble x){
    return x*x + 12;
}

void display03(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
        for(GLdouble x =0; x < 300.0; x += 0.05)
            glVertex2d(x, myFunc(x));
    glEnd();
    glFlush();
}

