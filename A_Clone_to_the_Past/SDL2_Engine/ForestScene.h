#pragma once
#include "Scene.h"

class ForestWorld;
class IngameMenu;
class Music;
class Player;
class UI;

class ForestScene : public Scene
{
public:
	// constructor
	ForestScene(Engine* _pEngine);

	// destructor
	virtual ~ForestScene();

	// render every frame
	virtual void Render(Renderer* _pRenderer) override;

	// update every frame
	virtual void Update(float _deltaTime) override;

	// load images
	virtual void Load(Renderer* _pRenderer) override;

	// unload images
	virtual void Unload() override;

private:
	// player
	Player * m_pPlayer;

	// ingame menu
	IngameMenu* m_pMenu;

	// Christian Thielsch
	// world
	ForestWorld* m_pWorld;

	// Sabrina Schmitz
	// ui
	UI* m_pUI;

	// background music
	Music* m_pBackgroundMusic;

	// Nils Jungjohann
	// create entities
	void CreateEntities(Renderer* _pRenderer);

	// collision and delete of entities
	void CheckCollision(float _deltaTime);
};