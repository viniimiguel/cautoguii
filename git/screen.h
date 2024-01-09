#pragma once
#include <string>
#include <opencv2/opencv.hpp>

class Screen
{
public:
	void screenshotsave(std::string locate);
	std::pair<bool, std::pair<int,int>>locateonscreen(std::string imgREF, std::string imgFIND, double confidence);
	std::pair<bool, std::pair<int, int>>locatecenteronscreen(std::string imgREF, std::string imgFIND, double confidence);
private:
};