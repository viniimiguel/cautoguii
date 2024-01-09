#include <iostream>
#include "fucmouse.h"
#include "screen.h"
#include <string>
#include <Windows.h>


int main()
{
    std::string caminho = "C:\\Users\\vinicius\\Desktop\\c++\\cautogui\\cautogui\\cautogui\\images\\screenshot.png";
    Moc* m1 = new Moc();
    Screen* s1 = new Screen();


    Sleep(3000);
    std::pair<int, int> pos = m1->getposition();
    Sleep(1000);
    m1->moveTo(pos.first, pos.second, 100);
    m1->click(15, "left");
}

 
