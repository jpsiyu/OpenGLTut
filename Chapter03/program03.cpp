#include "general.h"


void display03(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if((i+j)%2 == 0)
                setWindow(-5.0,5.0, -0.3, 1.0);
            else
                setWindow(-5.0,5.0, 1.0, -0.3);
            glViewport(i*64, j*44, 64, 44);
            drawSinc();
        }
    }
    drawSinc();
    glFlush();
}
