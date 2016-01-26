#include "general.h"
#include <math.h>
#include <time.h>


void init02(void){
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void drawDot(GLint x, GLint y){
    glBegin(GL_POINTS);
        glVertex2i(x, y);
    glEnd();
}


struct GLfloatColor{
    GLfloat r, g, b;
};

struct GLintPoint{
    GLint x, y;
};

void display02(void){
    glClear(GL_COLOR_BUFFER_BIT);
    GLintPoint T[3] = {{10, 10}, {600, 10}, {300, 600}};
    GLfloatColor C[3] = {{1.0, 0.0, 0.0}, {0.0, 1.0, 0.0}, {0.0, 0.0, 1.0}};
    int index = random() % 3;
    GLintPoint point = T[index];
    drawDot(point.x, point.y);
    for(int i=0; i < 55000; i++){
        index = random() % 3;
        point.x = (point.x + T[index].x) / 2;
        point.y = (point.y + T[index].y) / 2;
        glColor3f(C[index].r, C[index].g, C[index].b);
        drawDot(point.x, point.y);
    }
    glFlush();
}



