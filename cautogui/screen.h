#pragma once
#include <string>
#include <opencv2/opencv.hpp>


class Screen
{
public:
	void screenshotsave(std::string locate);
	void screenshotregion(std::string locate, int x, int y);
	std::pair<bool, std::pair<int, int>>locateonscreen(std::string imgREF, std::string imgFIND, double confidence);
	std::pair<bool, std::pair<int, int>>locatecenteronscreen(std::string imgREF, std::string imgFIND, double confidence);
	bool findWindow(std::string nameWindow);
	void sendInputToWindow();

private:
};