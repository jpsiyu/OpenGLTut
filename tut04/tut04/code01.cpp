#include <stdio.h>
#include <GL/glfw.h>

int main(){
  int width, height;
  int frame = 0;
  bool running = true;

  glfwInit();
  glfwOpenWindowHint(GLFW_FSAA_SAMPLES, 4);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_COMPAT_PROFILE);

  if(!glfwOpenWindow(512, 512, 0, 0, 0, 0, 0, 0, GLFW_WINDOW)){
    glfwTerminate();
    return 0;
  }

  glfwSetWindowTitle("GLFW APPLICATION");

  printf("RENDERER: %s\n", glGetString(GL_RENDER));
  printf("GL_VERSION: %s\n", glGetString(GL_VERSION));
  printf("GL_VERDOR: %s\n", glGetString(GL_VENDOR));
  printf("GL_SHADING_VERSION: %s\n", glGetString(GL_SHADING_LANGUAGE_VERSION));

  int m, n;
  glGetIntegerv(GL_MAJOR_VERSION, &m);
  glGetIntegerv(GL_MINOR_VERSION, &n);
  printf("GL_Major: %d\n", m);
  printf("GL_Minor: %d\n", n);
  printf("GL_Extensions: %s", glGetString(GL_EXTENSIONS));

  glfwTerminate();
  return 0;

}
