#pragma once
#include "Src/Topo.h"
#include "Planet.h"

class Game
{
private:
	char board[10][10];

public:
	Game();
	~Game();

	void play();
};