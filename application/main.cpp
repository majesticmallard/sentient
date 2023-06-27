#include <CogniEngine/Core.hpp>

int main(void) {
    Core core;
    core.init();

    while (core.running()) {
        core.update();
        core.draw();
        core.events();
    }

    return 0;
}
