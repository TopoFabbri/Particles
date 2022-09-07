#pragma once
#include "Src/Topo.h"
#include "Planet.h"

struct Particle
{
	Vector2 pos;
	Vector2 velocity;

	float weight;
};

class Game
{
private:

	static const int partCount = 1000;

	Particle part[partCount];
	Planet* planet;

public:
	Game();
	~Game();

	void loop();
	void play();
	void update();
	void draw();
};


Particle setParticle();