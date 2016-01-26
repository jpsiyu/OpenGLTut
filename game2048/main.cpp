#include "general.h"

void init(void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glOrtho(0.0, 250, 0.0, 250, 0.0, 0.0);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
    glVertex2i(50, 0);
    glVertex2i(100, 0);
    glVertex2i(100, 50);
    glVertex2i(50, 50);
    glEnd();
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("game2048");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
