#include "Main.h"
#include <GLFW/glfw3.h>


int main(int argc, char **argv)
{
    glfwInit();

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

    GLFWwindow* mainWindow = glfwCreateWindow(800,
                                          600,
                                          "Volume Renderer",
                                          nullptr,
                                          nullptr);

    GLFWwindow* profilerWindow = glfwCreateWindow(800,
                                                  600,
                                                  "Profiler",
                                                  nullptr,
                                                  nullptr);
    
    glfwMakeContextCurrent(mainWindow);

    while (!glfwWindowShouldClose(mainWindow))
    {
        // Profiler
        glfwMakeContextCurrent(profilerWindow);
        glfwSwapBuffers(profilerWindow);
        glfwPollEvents();

        // Volume renderer
        glfwMakeContextCurrent(mainWindow);
        glfwSwapBuffers(mainWindow);
        glfwPollEvents();
    }

    glfwTerminate();

    return 0;
}


Main::~Main()
{
}
