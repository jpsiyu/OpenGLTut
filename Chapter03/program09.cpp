#include "general.h"

void axis(double length){
    glPushMatrix();
    glBegin(GL_LINES);
    glVertex3d(0, 0, 0);
    glVertex3d(0, 0, length);
    glEnd();
    glTranslated(0, 0, length - 0.2);
    glutWireCone(0.04, 0.2, 12, 9);
    glPopMatrix();
}

void displayWire(void){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-2.0 * 64 / 48.0, 2.0 * 64 / 48.0, -2.0, 2.0, 0.1, 100);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(2.0, 2.0, 2.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(0, 0, 0);
    axis(0.5);
    glPushMatrix();
    glRotated(90, 0, 1.0, 0);
    axis(0.5);
    glRotated(-90.0, 1, 0, 0);
    axis(0.5);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0.5, 0.5, 0.5);
    glutWireCube(1.0);
    glPopMatrix();
    glPushMatrix();
    glTranslated(1.0, 1.0, 0);
    glutWireSphere(0.25, 10, 8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(1.0, 0, 1.0);
    glutWireCone(0.2, 0.5, 10, 8);
    glPopMatrix();
    glPushMatrix();
    glTranslated(1, 1, 1);
    glutWireTeapot(0.2);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 1.0, 0);
    glRotated(90.0, 1, 0, 0);
    glutWireTorus(0.1, 0.3, 10, 10);
    glPopMatrix();
    glPushMatrix();
    glTranslated(1.0, 0, 0);
    glScaled(0.15, 0.15, 0.15);
    glutWireDodecahedron();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 1.0, 1.0);
    glutWireCube(0.25);
    glPopMatrix();
    glPushMatrix();
    glTranslated(0, 0, 1.0);
    GLUquadricObj * qobj;
    qobj = gluNewQuadric();
    gluQuadricDrawStyle(qobj, GLU_LINE);
    gluCylinder(qobj, 0.2, 0.2, 0.4, 0, 0);
    glPopMatrix();
    glFlush();
}
