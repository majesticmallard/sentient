#include "CogniEngine/Core.hpp"
#include "glad/gl.h"
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

    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        std::cout << "Couldn't get glad" << std::endl;
        std::exit(1);
    }

    glViewport(0, 0, 800, 600);
}

void Core::events() {
    glfwPollEvents();
}

void Core::update() {
}

void Core::draw() {
    glClearColor(1.f, 1.f, 1.f, 1.f);
    glClear(GL_COLOR_BUFFER_BIT);

    glfwSwapBuffers(this->window);
}

bool Core::running() const {
    return !glfwWindowShouldClose(this->window);
}
