#include <stdlib.h>
#include <GL/glut.h>
/*
void init(){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);
}

void myDisplay(){
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(-1.0, -1.0);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, -1.0);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.5, 1.0);

    glEnd();
    glFlush();
}

void myReshape(GLsizei w, GLsizei h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w <= h)
        gluOrtho2D(-1.0, 1.5, -1.5, 1.5*(GLfloat)h/(GLfloat)w);
    else
        gluOrtho2D(-1.0, 1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5);
    glMatrixMode(GL_MODELVIEW);
}
*/
/*
int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Triangle");
    init();
    glutReshapeFunc(myReshape);
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return(0);
}
*/
