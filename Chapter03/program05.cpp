#include "general.h"

float lerpValue = 0.0;
float lerpValueIncr = 0.1;

void init05(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 1.0f);
    glLineWidth(4.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



void drawRect1(void){
    glBegin(GL_LINE_LOOP);
    glVertex2i(0, 0);
    glVertex2i(100, 0);
    glVertex2i(100, 100);
    glVertex2i(0, 100);
    glEnd();
    glFlush();
}

void drawRect2(void){
    glBegin(GL_LINE_LOOP);
    glVertex2i(50, 0);
    glVertex2i(100, 50);
    glVertex2i(50, 100);
    glVertex2i(0, 50);
    glEnd();
    glFlush();
}

void drawRect3(void){
    glClear(GL_COLOR_BUFFER_BIT);
    myPoint Apoints[4] = {{0.0, 0.0}, {100.0, 0.0}, {100.0, 100.0}, {0.0, 100.0}};
    myPoint Bpoints[4] = {{50.0, 0.0}, {100.0, 50.0}, {50.0, 100.0}, {0.0, 50.0}};
    myPoint CPoints[4];

    for(int index = 0; index < 4; index++){
        if (lerpValue >= 1.0)
            lerpValue = 0.0;

        CPoints[index].x = (1-lerpValue) * Apoints[index].x + lerpValue * Bpoints[index].x;
        CPoints[index].y = (1-lerpValue) * Apoints[index].y + lerpValue * Bpoints[index].y;
    }
    lerpValue += lerpValueIncr;
    glBegin(GL_LINE_LOOP);
    glVertex2f(CPoints[0].x, CPoints[0].y);
    glVertex2f(CPoints[1].x, CPoints[1].y);
    glVertex2f(CPoints[2].x, CPoints[2].y);
    glVertex2f(CPoints[3].x, CPoints[3].y);
    glEnd();
    glFlush();
}


void display05(void){
    glClear(GL_COLOR_BUFFER_BIT);
    drawRect1();
}

void mouse05(int button, int state, int x, int y){
    if (state == GLUT_DOWN){
        drawRect3();
    }
}
