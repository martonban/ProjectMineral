#pragma once
class Window
{
	public:
		void initWindow(const char* title, int width, int height);
	private:
		void startGame(const char* title, int width, int height);
	private:
		int width;
		int height;
};

