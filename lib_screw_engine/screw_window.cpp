//
// Created by Jaret Screws on 9/18/21.
//

#include "screw_window.h"

#include <utility>

namespace se {
    screw_window::screw_window(int width, int height, std::string windowName) : window(nullptr), width(width), height(height), windowName(std::move(windowName)) {
        initWindow();
    }

    void screw_window::initWindow() {
        glfwInit();

        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
    }

    screw_window::~screw_window() {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    bool screw_window::shouldClose() {
        return glfwWindowShouldClose(window);
    }
}
