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
    Game* game = new Game();
    defaults();
    game->play();
}

void defaults()
{
    srand(time(nullptr));
}