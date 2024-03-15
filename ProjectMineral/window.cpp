#include "window.h"
#include "raylib.h"
#include "renderer2d.h"

void Window::initWindow(const char* title, int width, int height) {
	startGame(title, width, height);
	// TO-DO:
	// Serialization!
}

void Window::startGame(const char* title, int width, int height) {
	InitWindow(width, height, title);
	
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
		Window::renderer.render();
    }

    CloseWindow();
}