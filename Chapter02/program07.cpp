#include "general.h"

void init07(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void display07(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void myMouse07(int button, int state, int x, int y){
    if (state == GLUT_DOWN){
        if (button == GLUT_LEFT_BUTTON){
            glBegin(GL_POINTS);
            glVertex2i(x, SCREEN_HEIGHT-y);
            glEnd();
            glFlush();
        }
        else if (GLUT_RIGHT_BUTTON){
            glClearColor(1.0f, 0.0f, 0.0f, 0.0f);
            glClear(GL_COLOR_BUFFER_BIT);
            glFlush();
        }
    }
    return;
}
