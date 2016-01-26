#include "general.h"
#include <stdio.h>

struct MyPoint{
    GLint x,y;
};

struct MyRect{
    MyPoint a,b,c,d;
};

MyRect genRectByFirstVertex(GLint x, GLint y){
    MyRect rect = {{x, y}, {x+10, y}, {x+10, y+10}, {x, y+10}};
    return rect;
}

void drawRect(MyRect rect){
    glBegin(GL_LINE_LOOP);
        glVertex2i(rect.a.x, rect.a.y);
        glVertex2i(rect.b.x, rect.b.y);
        glVertex2i(rect.c.x, rect.c.y);
        glVertex2i(rect.d.x, rect.d.y);
    glEnd();
}

void display06(void){
    glClear(GL_COLOR_BUFFER_BIT);
    MyRect rect =  genRectByFirstVertex(0, 0);
    drawRect(rect);
    glFlush();
}
