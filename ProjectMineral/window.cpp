#include "window.h"
#include "raylib.h"

void Window::initWindow(const char* title, int width, int height) {
	startGame(title, width, height);
	// TO - DO
	// Serialization!
}

void Window::startGame(const char* title, int width, int height) {
	InitWindow(width, height, title);
	SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
}