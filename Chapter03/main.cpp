#include "general.h"

const float pi = 3.1415926;



void setWindow(GLdouble left, GLdouble right, GLdouble buttom, GLdouble top){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(left, right, buttom, top);
}

void setViewport(GLint left, GLint right, GLint buttom, GLint top){
    glViewport(left, buttom, right-left, top-buttom);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("OpenGL");
    glutDisplayFunc(displaySolid);
    //glutMouseFunc(mouse05);
    init10();
    //setWindow(-5.0, 5.0, -0.3, 1.0);
    //setViewport(0, 640, 0, 480);
    glutMainLoop();
    return 0;
}
