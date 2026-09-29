#include <iostream>
#include <raylib.h>

int main() {

    InitWindow(800, 600, "GAME");
    SetTargetFPS(60);

    float posx = 300, posy = 300;

    while (!WindowShouldClose()) {

        if(IsKeyDown(KEY_D)){
            posx += 5;
        }

        if(IsKeyDown(KEY_A)){
            posx -= 5;
        }

        if(IsKeyDown(KEY_S)){
            posy += 5;
        }

        if(IsKeyDown(KEY_W)){
            posy -= 5;
        }

        BeginDrawing();

        ClearBackground(GREEN);
        DrawFPS(10, 10);



        DrawCircle(posx, posy, 50, RED);



        EndDrawing();
    }

    CloseWindow();

    return 0;
}
