#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

class Core {
public:
    Core() = default;
    ~Core() = default;

    void init();
    void events();
    void update();
    void draw();

    bool running() const;
private:
    GLFWwindow* window;
};
