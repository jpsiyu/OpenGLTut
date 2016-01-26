#include "general.h"

void init(void){
    //glViewport(0, 0, 640, 480);
    glClearColor(1.0, 1.0, 1.0, 0.0);
}

void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glLoadIdentity();

    gluLookAt(0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    //gluLookAt(0.0, 0.0, 0.0, 0.0, 0.0, -1.0, 0.0, 1.0, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glutWireCube(1.0);
    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OPENGL");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
