#pragma once
#include "Particle.h"
#include "Src/Topo.h"
#include "Planet.h"

class Game
{
private:

	static const int partCount = 5000;

	Particle* part[partCount];
	Planet* planet;

public:
	Game();
	~Game();

	void loop();
	void play();
	void update();
	void draw();
	void updateParticleVel(int i);
};

Particle setParticle();