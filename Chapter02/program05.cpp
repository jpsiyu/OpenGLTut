#include "general.h"

void display05(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
        glVertex2i(40, 40);
        glVertex2i(100, 40);
        glVertex2i(100, 100);
        glVertex2i(70, 120);
        glVertex2i(40, 100);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glVertex2i(45, 40);
        glVertex2i(45, 80);
        glVertex2i(65, 80);
        glVertex2i(65, 40);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2i(70, 70);
        glVertex2i(85, 70);
        glVertex2i(85, 85);
        glVertex2i(70, 85);
    glEnd();
    glBegin(GL_LINE_STRIP);
        glVertex2i(45, 105);
        glVertex2i(45, 120);
        glVertex2i(55, 120);
        glVertex2i(55, 110);
    glEnd();
    glFlush();
}
