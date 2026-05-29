#include "raylib.h"

int main() {
    InitWindow(800, 600, "My D Drive Game");
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        DrawText("My Game on D Drive!", 280, 280, 20, WHITE);
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}