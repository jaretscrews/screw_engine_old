#ifndef SCREW_ENGINE_SCREW_ENGINE_H
#define SCREW_ENGINE_SCREW_ENGINE_H

#include "screw_window.h"

namespace se {
    class screw_engine {
    public:
        screw_engine(int width, int height, std::string name);

        void run();

    private:
        void mainLoop();

        screw_window window;
    };
}

#endif //SCREW_ENGINE_SCREW_ENGINE_H
