#ifndef GENERAL_H_INCLUDED
#define GENERAL_H_INCLUDED

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>

void setWindow(GLdouble, GLdouble, GLdouble, GLdouble);
void setViewport(GLint, GLint, GLint, GLint);

void init01(void);
void display01(void);

void display02(void);
void drawSinc(void);

void display03(void);

void init04(void);
void display04(void);

void init05(void);
void display05(void);
void mouse05(int, int, int, int);

struct myPoint{
    GLfloat x, y;
};

void init06(void);
void display06(void);

void init07(void);
void display07(void);

void rotate2D(double angle);
void display08(void);
void init08(void);

void displayWire(void);

void init10(void);
void displaySolid(void);

#endif // GENERAL_H_INCLUDED
