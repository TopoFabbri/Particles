#pragma once

#include "raylib.h"

#include <cstdlib>

class Particle
{
private:
	Vector2 pos;
	Vector2 vel;
	float weight;
	float speed;

public:
	Particle();
	~Particle();

	void move();
	void draw();
	Vector2 getDistance(Vector2 pos);
	Vector2 getPos();
	void setVelocity(Vector2 vel);
	void setSpeed(float speed);
	void moveLeft();
	void moveRight();
};