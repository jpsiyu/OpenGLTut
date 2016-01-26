#include "general.h"


void display08(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

struct GLintPoint{
    GLint x, y;
};

void myMouse08(int button, int state, int x, int y){
    static GLintPoint corner[2];
    static int numCorners = 0;
    if (state == GLUT_DOWN){
        if(button == GLUT_LEFT_BUTTON){
            corner[numCorners].x = x;
            corner[numCorners].y = SCREEN_HEIGHT - y;
            if(++numCorners == 2){
                glRecti(corner[0].x, corner[0].y, corner[1].x, corner[1].y);
                numCorners = 0;
                glFlush();
            }
        }
        else if (button == GLUT_RIGHT_BUTTON){
            glClear(GL_COLOR_BUFFER_BIT);
            glFlush();
        }
    }
}
