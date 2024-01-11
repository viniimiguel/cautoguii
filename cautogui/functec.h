#pragma once
#include <string>
#include <Windows.h>

class Tec
{
public:
	void press(char key, int numPRESS);
	void write(std::string myWrite);
	void hotkey(char key1, char key2);
	void pressansy(BYTE key, int numPRESS);
	void hotkeyansy(BYTE key1, BYTE key2);
private:
};
