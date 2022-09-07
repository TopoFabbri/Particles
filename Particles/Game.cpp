#include "Game.h"

void Game::update()
{


}

void Game::draw()
{
	BeginDrawing();
	ClearBackground(BLACK);

	for (int i = 0; i < partCount; i++)
	{
		DrawPixelV(part[i].pos, WHITE);
	}

	EndDrawing();
}

void Game::play()
{
	//Update
	update();


	//Draw
	draw();
}

Game::Game()
{
	for (int i = 0; i < partCount; i++)
	{

		part[i] = setParticle();

	}

}

Game::~Game()
{



}

void Game::loop()
{
	while (!WindowShouldClose())
	{
		play();
	}

}

Particle setParticle()
{
	Particle particle;

	particle.pos.x = rand() % GetScreenWidth();
	particle.pos.y = rand() % GetScreenHeight();

	particle.velocity.x = 0.0f;
	particle.velocity.y = 0.0f;

	particle.weight = 1.0f;

	return particle;

}