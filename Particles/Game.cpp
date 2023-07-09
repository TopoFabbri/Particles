#include "Game.h"

Game::Game()
{
	planet = new Planet();

	for (int i = 0; i < partCount; i++)
	{
		part[i] = new Particle();
	}
}

Game::~Game()
{
}

void Game::play()
{
	//Update
	update();

	//Draw
	draw();
}

void Game::update()
{
	planet->grav += (GetMouseWheelMove() * 1000);
	if (IsMouseButtonPressed(MOUSE_BUTTON_MIDDLE))
		planet->grav = 0;

	planet->update();
	for (int i = 0; i < partCount; i++)
	{
		updateParticleVel(i);
		part[i]->move();

		if (IsMouseButtonDown(MOUSE_BUTTON_RIGHT))
			part[i]->moveLeft();
		if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
			part[i]->moveRight();
	}
}

void Game::draw()
{
	BeginDrawing();
	ClearBackground(BLACK);

	for (int i = 0; i < partCount; i++)
	{
		part[i]->draw();
	}

	//planet->draw();

	EndDrawing();

	TakeScreenshot("Space.png");
}

void Game::updateParticleVel(int i)
{
	Vector2 dis = part[i]->getDistance(GetMousePosition());
	Vector2 newVel{};
	newVel.x = dis.x / getLength({ part[i]->getPos(), GetMousePosition() });
	newVel.y = dis.y / getLength({ part[i]->getPos(), GetMousePosition() });
	part[i]->setVelocity(newVel);
	part[i]->setSpeed(planet->grav/getLength({ part[i]->getPos(), GetMousePosition() }));
}

void Game::loop()
{
	while (!WindowShouldClose())
	{
		play();
	}
}