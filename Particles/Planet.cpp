#include "Planet.h"

Planet::Planet()
{
	cir = {{0, 0}, 10 };
	grav = 1;
	color = RED;
}

Planet::~Planet()
{
}

void Planet::update()
{
	cir.center = GetMousePosition();
}

void Planet::draw()
{
	drawCircleCir(cir, color);
}