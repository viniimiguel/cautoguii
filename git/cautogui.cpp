#include <iostream>
#include "fucmouse.h"
#include "screen.h"
#include "functec.h"
#include <string>
#include <Windows.h>

int main()
{
    std::string caminho = "C:\\Users\\vinicius\\Desktop\\c++\\cautogui\\cautogui\\cautogui\\images\\screenshot.png";
    std::string caminho2 = "C:\\Users\\vinicius\\Desktop\\c++\\cautogui\\cautogui\\cautogui\\images\\img2.png";
    Moc* m1 = new Moc();
    Screen* s1 = new Screen();
    Tec* f1 = new Tec();

    Sleep(1000);
    s1->screenshotsave(caminho);
    auto resultado = s1->locatecenteronscreen(caminho, caminho2, 0.8);
    if(resultado.first)
    {
        m1->moveTo(resultado.second.first, resultado.second.second, 1000);
    }

}


