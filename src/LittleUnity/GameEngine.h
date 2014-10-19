#pragma once
class GameEngine
{
public:
	GameEngine();
	
	~GameEngine();

	bool Initialize();
	void Render();
	void CleanUp();

private:
	bool initDevice();
	void cleanupDevice();
};

