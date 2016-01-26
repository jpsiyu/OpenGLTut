#include <stdio.h>
#include <stdlib.h>
#include <GL/glew.h>
#include <GL/glfw.h>

/*
int main(int argc, char** argv){
    printf("run code02");

    glfwInit();
    if (!glfwOpenWindow(512, 512, 0, 0, 0, 0, 0, 0, GLFW_WINDOW)){
        glfwTerminate();
        printf("glfw terminate");
        return 0;
    }

    glfwSetWindowTitle("GLFW Application");

    GLenum err = glewInit();
    if (GLEW_OK != err){
        printf("init GLEW Err!\n");
        return 0;
    }else{
        printf("init GLEW ok!\n");
    }

    if(glewIsSupported("GL_ARB_fragment_program"))
        printf("support GL_ARB_fragment_program\n");
    else
        printf("not support GL_ARB_fragment_program\n");

    if(glewIsSupported("GL_ARB_fragment_shader"))
        printf("support GL_ARB_fragment_shader\n");
    else
        printf("not support GL_ARB_fragment_shader\n");

    if(glewIsSupported("GL_ARB_vertex_program"))
        printf("support GL_ARB_vertex_program\n");
    else
        printf("not support GL_ARB_vertex_programn");

    if(glewIsSupported("GL_ARB_vertex_shader"))
        printf("support GL_ARB_vertex_shader\n");
    else
        printf("not support GL_ARB_vertex_shader\n");

    if(glewIsSupported("GL_ARB_gpu_shader5"))
        printf("support GL_ARB_gpu_shader5\n");
    else
        printf("not support GL_ARB_gpu_shader5\n");

    glfwTerminate();

    return 0;
}
*/
