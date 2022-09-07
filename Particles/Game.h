#pragma once
class Game
{
private:
	char board[10][10];

public:
	Game();
	~Game();

	void play();
};