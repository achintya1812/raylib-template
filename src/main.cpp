#include "raylib.h"
#include "imgui.h"
#include "rlImGui.h"

int main()
{
    const int screen_width  = 1000;
    const int screen_height = 1000;

    InitWindow(screen_width, screen_height, "Raylib Project");
    SetTargetFPS(60);
    rlImGuiSetup(true);  

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(RAYWHITE);

            rlImGuiBegin();
                ImGui::Begin("Controls");
                ImGui::End();
            rlImGuiEnd();
        EndDrawing();
    }

    rlImGuiShutdown();
    CloseWindow();
    return 0;
}
