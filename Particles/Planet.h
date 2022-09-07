#pragma once

#include "Src/Topo.h"

class Planet
{
private:
	Circle cir{};
	float grav;
	Color color{};

public:
	Planet();
	~Planet();

	void update();
	void draw();
};