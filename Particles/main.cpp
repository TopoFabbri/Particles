#include "Src/Topo.h"

#include <iostream>
#include <ctime>

#include "Game.h"

void runProgram();
void defaults();

void main()
{
    runProgram();
}

void runProgram()
{
    defaults();

    Game* game = new Game();
    game->loop();
    delete game;
}

void defaults()
{
    srand(time(nullptr));
    SetTargetFPS(60);
    InitWindow(1920, 1080, "Particles - FewZ");
}