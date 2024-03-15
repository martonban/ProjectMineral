#pragma once
#include "raymath.h"

/*
------------------------------------------------------
				NebulaPax Engine - Scene
				   Marton Ban (c) 2024

	Controctor: It will need an ID wich the scene manager will allocate
------------------------------------------------------
*/
class Scene
{
	// Functions
	public:
		Scene(int allocatedID, Vector3 backgroundcolor) {
			ID = allocatedID;
			color = backgroundcolor;
		}
		void render();
	private:

	// Data fields
	public:
		int ID;
	private:
		// Basic data
		Vector3 color;
};

