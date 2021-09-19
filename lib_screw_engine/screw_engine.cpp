#include "screw_engine.h"


namespace se {

    screw_engine::screw_engine(int width, int height, std::string windowName) : window(width, height, std::move(windowName)){

    }

    void screw_engine::run() {
        mainLoop();
    }

    void screw_engine::mainLoop() {
        while (!window.shouldClose()) {
            glfwPollEvents();
        }
    }
}
