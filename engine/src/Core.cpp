#include "CogniEngine/Core.hpp"
#include <GLFW/glfw3.h>

void Core::init() {
    if (!glfwInit()) {
        std::cout << "Couldn't start glfw" << std::endl;
        std::exit(1);
    }

    this->window = glfwCreateWindow(800, 600, "Sentient", NULL, NULL);

    if (this->window == nullptr) {
        glfwTerminate();
        std::cout << "Couldn't create window" << std::endl;
        std::exit(1);
    }

    glfwMakeContextCurrent(this->window);
}

void Core::events() {
    glfwPollEvents();
}

void Core::update() {
}

void Core::draw() {
    glClearColor(0.7f, 0.9f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(this->window);
}

bool Core::running() const {
    return !glfwWindowShouldClose(this->window);
}
