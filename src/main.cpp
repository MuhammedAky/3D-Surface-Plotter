#include "../include/GLProgram.h"


#define WINDOW_WIDTH 1600
#define WINDOW_HEIGHT 1200

const char* vertexShaderPath = "shaders/vertexShader.vs";
const char* fragmentShaderPath = "shaders/fragmentShader.fs";
const char* whiteFragmentShaderPath = "shaders/whiteFragmentShader.fs";

int GLProgram::windowWidth = WINDOW_WIDTH;
int GLProgram::windowHeight = WINDOW_HEIGHT;

Camera GLProgram::camera;
bool GLProgram::mousePressed = false;
double GLProgram::prevMouseX, GLProgram::prevMouseY;
glm::mat4 GLProgram::modelMatrix = glm::mat4(1.0f);

int main() {
    GLProgram program;
    program.init(vertexShaderPath, fragmentShaderPath, whiteFragmentShaderPath);
    program.setClearColor(0.05f, 0.18f, 0.25f, 1.0f);
    program.run();
    program.cleanup();
    return 0;
}