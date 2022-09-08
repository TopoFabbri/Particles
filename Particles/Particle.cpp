#include "Particle.h"

Particle::Particle()
{
	pos.x = (float)(rand() % GetScreenWidth());
	pos.y = (float)(rand() % GetScreenHeight());

	vel.x = 0.0f;
	vel.y = 0.0f;

	weight = 1.0f;

	speed = 0.0f;
}

Particle::~Particle()
{
}

void Particle::move()
{
	pos.x += vel.x * GetFrameTime() * speed;
	pos.y += vel.y * GetFrameTime() * speed;
}

void Particle::draw()
{
	DrawPixelV(pos, WHITE);
}

Vector2 Particle::getDistance(Vector2 pos)
{
	pos.x = pos.x - this->pos.x;
	pos.y = pos.y - this->pos.y;

	return pos;
}

Vector2 Particle::getPos()
{
	return pos;
}

void Particle::setVelocity(Vector2 vel)
{
	this->vel = vel;
}

void Particle::setSpeed(float speed)
{
	this->speed = speed;
}

void Particle::moveLeft()
{
	pos.x -= 50;
}

void Particle::moveRight()
{
	pos.x += 50;
}