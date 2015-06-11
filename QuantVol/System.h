#ifndef _System_h_
#define _System_h_

#include "VolumeRenderer.h"

#include <GLFW/glfw3.h>
#include "oclUtils.h"

class System
{
public:
    System();
    ~System();

    bool Init();
    void Shutdown();
    // Render loop.
    bool Run();

private:
    // create the windows
    bool InitWindows();
    // initialize OpenGL stuff.
    bool InitGL();
    // initialize OpenCL stuff.
    bool InitCL();

    // member
    VolumeRenderer *m_pVolumeRenderer;
    GLFWwindow *m_pMainWindow;
    GLFWwindow *m_pProfilerWindow;

};

#endif //_System_h_