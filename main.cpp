#include <iostream> 
#include <raylib.h> 

using namespace std; 

Color teal = {0, 109, 117, 255};
Color orange = {234, 114, 0, 255};

int cellSize = 25; 
int cellCount = 20; 

int main(){

    InitWindow(cellSize * cellCount, cellSize * cellCount, "Snake Game C++");
    SetTargetFPS(60);

    while(WindowShouldClose() == false){
        BeginDrawing();

        //Drawing
        ClearBackground(teal);

        EndDrawing(); 
    }

    CloseWindow(); 
    return 0; 
}