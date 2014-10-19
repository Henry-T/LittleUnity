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
	bool compileShaders();
	bool createShaders();
	bool setInputLayout();
	void cleanupDevice();
};

