//
//HorizontalWall.cpp
//

// Engine includes.
#include "DisplayManager.h"
#include "LogManager.h"
#include "WorldManager.h"
#include "GameManager.h"
#include "utility.h";
#include "HorizontalWall.h";

HorizontalWall::HorizontalWall(int w) {


	setAltitude(1);

	// Set object type.
	setType("HorizontalWall");


	horizontalSpeed = 0;

	width = w;

	setSolidness(df::HARD);

	setBox(df::Box(getPosition(), width, 1));
}

HorizontalWall::~HorizontalWall() {
	Object::~Object();
	WM.removeObject(this);
}

void HorizontalWall::draw() {
	for (int i = 0; i < width; i++) {
		DM.drawCh(df::Vector(getPosition().getX() + i, getPosition().getY()), '#', df::WHITE);
	}
}
