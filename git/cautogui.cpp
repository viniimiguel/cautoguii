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
    Tec* t1 = new Tec();


    s1->screenshotregion(caminho, 1320, 30);


    


    
    

}


