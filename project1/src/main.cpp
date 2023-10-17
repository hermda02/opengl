#include "config.h"

int main() {
    
    std::cout << "No error here" << std::endl;

    GLFWwindow* window;

    std::cout << glfwInit() << std::endl;

    std::cout << "No error here" << std::endl;


    /* Check to see if GLFW can start*/
    if (!glfwInit()) {
        std::cout << "GLFW couldn't start" << std::endl;
        return -1;
    }

    std::cout << "No error here" << std::endl;

    window = glfwCreateWindow(640, 480, "Testing", NULL, NULL);
    
    /* Check to see if the window object failed to initialize*/
    // if (!window) {
    //     glfwTerminate();
    //     exit(EXIT_FAILURE)
    // }

    // glfwSetKeyCallback(window, key_callback);

    // glfwMakeContextCurrent


    // while (!glfwWindowShouldClose(window)) {

    //     glfwPollEvents();

    // }

    glfwTerminate();
    return 0;
}