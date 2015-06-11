#include "Main.h"
#include "System.h"

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    System *pSystem = new System;
    if (!pSystem)
    {
        cout << "Error creating system." << endl;
        return 1;
    }

    if (pSystem->Init())
    {
        pSystem->Run();
    }
    else
    {
        cout << "Error initializing OpenGL/OpenCL." << endl;
    }

    // cleanup
    pSystem->Shutdown();
    delete pSystem;
    pSystem = 0;

    return 0;
}


Main::~Main()
{
}
