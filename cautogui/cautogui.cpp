#include <iostream>
#include "fucmouse.h"
#include "screen.h"
#include "functec.h"
#include <string>
#include <Windows.h>

int main()
{
    std::string caminho = "C:\\Users\\vinicius\\Desktop\\c++\\cautogui\\cautogui\\cautogui\\images\\screenshot.png";
    std::string caminho2 = "C:\\Users\\vinicius\\Desktop\\c++\\cautogui\\cautogui\\cautogui\\images\\img1.png";
    Moc* m1 = new Moc();
    Screen* s1 = new Screen();
    Tec* t1 = new Tec();


    s1->screenshotregion(caminho, 500, 500);
    auto result = s1->locatecenteronscreen(caminho, caminho2, 0.8);

    if(result.first)
    {
        m1->moveTo(result.second.first, result.second.second, 1000);
        std::cout << "o centro da imagem se encontra em X:" << result.second.first << " Y: " << result.second.second << std::endl;
    }

    


    
    

}


