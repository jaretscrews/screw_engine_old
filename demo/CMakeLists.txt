add_executable(screw_engine_demo demo.cpp)
find_package(glfw3 3.3 REQUIRED)
target_link_libraries(screw_engine_demo PUBLIC screw_engine glfw)