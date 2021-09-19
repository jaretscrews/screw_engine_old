//
// Created by Jaret Screws on 9/18/21.
//

#include "../lib_screw_engine/screw_engine.h"

#include <iostream>
#include <stdexcept>
#include <cstdlib>

using namespace se;

int main() {
    screw_engine engine(800, 600, "Screw Engine");

    try {
        engine.run();
    } catch (const std::exception &exception) {
        std::cerr << exception.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}