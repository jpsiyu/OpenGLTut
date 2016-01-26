#include "general.h"

struct GLintPoint{
    GLint x, y;
};

GLintPoint corner[2];
bool selected = false;


void init09(void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT);
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glViewport(0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);
}

void display09(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3f(1.0f, 1.0f, 1.0f);
    if(selected){
        glBegin(GL_QUADS);
        glVertex2i(corner[0].x, corner[0].y);
        glVertex2i(corner[0].x, corner[1].y);
        glVertex2i(corner[1].x, corner[1].y);
        glVertex2i(corner[1].x, corner[0].y);
        glEnd();
    }
    glutSwapBuffers();
}

void myMouse09(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        corner[0].x = x;
        corner[0].y = SCREEN_HEIGHT - y;
        selected = true;
    }
    glutPostRedisplay();
}

void myPassiveMotion090(int x, int y){
    corner[1].x = x;
    corner[1].y = SCREEN_HEIGHT - y;
    glutPostRedisplay();
}
