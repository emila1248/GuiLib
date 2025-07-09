#include "raylib.h"
#include "resource_dir.h"	// utility header for SearchAndSetResourceDir

int main ()
{
	SetConfigFlags(FLAG_VSYNC_HINT | FLAG_WINDOW_HIGHDPI);
    InitWindow(640, 360, "Hello Raylib");

	// Util func from resource_dir.h to find resources folder and set it as current working directory
	SearchAndSetResourceDir("resources");
	
	// game loop
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLACK);

		DrawText("Hello Raylib", 200,200,20,WHITE);
		
		EndDrawing();
	}

	// cleanup

	CloseWindow();
	return 0;
}
