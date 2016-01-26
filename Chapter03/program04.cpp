#include "general.h"

class GLintPoint{
    public:
        GLint x, y;
};

class Point2{
    public:
        float x, y;
        void set(float dx, float dy) {x = dx; y = dy;}
        void set(Point2& p) {x=p.x; y=p.y;}
        Point2(float xx, float yy){x=xx; y=yy;}
        Point2() {x=y=0;}
};

Point2 currPos;
Point2 CP;

void moveTo(Point2 p){
    CP.set(p);
}

void lineTo(Point2 p){
    glBegin(GL_LINES);
    glVertex2f(CP.x, CP.y);
    glVertex2f(p.x, p.y);
    glEnd();
    glFlush();
    CP.set(p);
}

void init04(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 0.0, 0.0, 0.0);
    glColor3f(0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
}

void rosette(int N, float radius){
    Point2 * pointList = new Point2[N];
    GLfloat theta = (2.0f * 3.1415926) / N;
    for (int c=0; c<N; c++){
        pointList[c].set(radius * sin(theta * c), radius * cos(theta * c));
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            moveTo(pointList[i]);
            lineTo(pointList[j]);
        }
    }
}

void display04(){
    glClear(GL_COLOR_BUFFER_BIT);
    glViewport(10, 10, 640, 480);
    //rosette(5, .66f);
    rosette(100, .66f);
    glFlush();
}
