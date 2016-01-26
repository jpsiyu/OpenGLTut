#include <stdlib.h>
#include <GL/glut.h>

static GLfloat spin = 0.0;

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
    glVertex2f(1.0, -1.0);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0.0, 1.0);



    glEnd();
    glFlush();
}


void myDisplay2(){
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(0.25, 0.25, 0.0);
        glVertex3f(0.75, 0.25, 0.0);
        glVertex3f(0.75, 0.75, 0.0);
        glVertex3f(0.25, 0.75, 0.0);
    glEnd();
    glFlush();
}

void myDisplay3(){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    //glutWireTeapot(0.5);
    //glutSolidCube(0.5);
    //glutWireSphere(0.5, 10, 10);
    glutSolidSphere(0.5, 10, 10);
    glFlush();

}

void myDisplay4(){
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();
    glRotatef(spin, 0.0, 0.0, 1.0);
    glColor3f(1.0, 1.0, 1.0);
    glRectf(-25.0, -25.0, 25.0, 25.0);
    glPopMatrix();
    glutSwapBuffers();
}

void spinDisplay(){
    spin = spin + 2.0;
    if (spin > 360.0){
        spin = spin - 360.0;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
    switch(button){
        case GLUT_LEFT_BUTTON:
            if (state == GLUT_DOWN)
                glutIdleFunc(spinDisplay);
            break;
        case GLUT_MIDDLE_BUTTON:
            if (state == GLUT_DOWN)
                glutIdleFunc(NULL);
            break;
        default:
            break;
    }
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


int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("OpenGL");
    init();
    glutReshapeFunc(myReshape);
    glutDisplayFunc(myDisplay4);
    glutMouseFunc(mouse);
    glutMainLoop();
    return(0);
}

