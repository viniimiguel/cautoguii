#include "functec.h"
#include <Windows.h>
#include <string>
#include <iostream>

void Tec::press(char key, int numPRESS)
{
	// tenho que lembrar de depois colocar as funcionalidades de teclas especiais SE LEMBREE
	for(int i=0;i<numPRESS; i++)
		keybd_event(key, 0, KEYEVENTF_EXTENDEDKEY, 0);
		Sleep(100);
		keybd_event(key, 0, KEYEVENTF_KEYUP, 0);
}
void Tec::hotkey(char key1, char key2)
{
	// tenho que lembrar de depois colocar as funcionalidades de teclas especiais SE LEMBREE
	keybd_event(key1, 0, KEYEVENTF_EXTENDEDKEY, 0);
	Sleep(50);
	keybd_event(key2, 0, KEYEVENTF_EXTENDEDKEY, 0);
	Sleep(50);
	keybd_event(key2, 0, KEYEVENTF_KEYUP, 0);
	Sleep(50);
	keybd_event(key1, 0, KEYEVENTF_KEYUP, 0);
}
void Tec::write(std::string myWrite)
{
	// tenho que me lembrar de depois inserir caracteres especiais aqui. no caso caracteres como !#%$# ´´'~~]][;.  porem agora estou cansado
	for (char c : myWrite) {
		SHORT vKey = VkKeyScan(c);
		keybd_event(static_cast<BYTE>(vKey), 0, KEYEVENTF_EXTENDEDKEY, 0);
		Sleep(50);
		keybd_event(static_cast<BYTE>(vKey), 0, KEYEVENTF_KEYUP, 0);
	}
}
