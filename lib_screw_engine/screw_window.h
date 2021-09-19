//
// Created by Jaret Screws on 9/18/21.
//

#pragma clang diagnostic push
#pragma ide diagnostic ignored "OCUnusedMacroInspection"
#ifndef SCREW_ENGINE_SCREW_WINDOW_H
#define SCREW_ENGINE_SCREW_WINDOW_H

#include <string>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

namespace se {
    class screw_window {
    public:
        screw_window(int width, int height, std::string  windowName);
        ~screw_window();

        screw_window(const screw_window &) = delete;
        screw_window(screw_window &&) = delete;

        bool shouldClose();
    private:
        void initWindow();

        GLFWwindow* window;

        const int width;
        const int height;

        std::string windowName;
    };
}


#endif //SCREW_ENGINE_SCREW_WINDOW_H

#pragma clang diagnostic pop