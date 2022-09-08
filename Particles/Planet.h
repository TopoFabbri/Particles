#pragma once

#include "Src/Topo.h"

class Planet
{
private:
	Circle cir;
	Color color;

public:
	float grav;

	Planet();
	~Planet();

	void update();
	void draw();
};