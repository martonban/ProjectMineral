#include "renderer2d.h"
#include "raylib.h"

void Renderer2D::initRenderer2D() {

}

void Renderer2D::render() {
    BeginDrawing();

    ClearBackground(RAYWHITE);

    DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    EndDrawing();
}