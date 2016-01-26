#include "general.h"

void init01(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 1.0f);
    glLineWidth(2.0);
}

void display01(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glBegin(GL_LINE_STRIP);
    for(float x = -4.0; x < 4.0; x += 0.1){
        if (x == 0.0)
            glVertex2f(0.0, 1.0);
        else
            glVertex2f(x, sin(3.14159*x)/(3.14159*x));
    }
    glEnd();
    glFlush();
}
