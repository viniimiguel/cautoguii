#include "screen.h"
#include <iostream>
#include "opencv2/opencv.hpp"
#include "Windows.h"

void Screen::screenshotsave(std::string locate)
{
    HWND hDesktop = GetDesktopWindow();


    RECT desktopRect;
    GetWindowRect(hDesktop, &desktopRect);
    int screenWidth = desktopRect.right;
    int screenHeight = desktopRect.bottom;


    cv::Mat screenshot = cv::Mat(screenHeight, screenWidth, CV_8UC4);
    HDC hScreenDC = GetDC(hDesktop);
    HDC hMemoryDC = CreateCompatibleDC(hScreenDC);
    HBITMAP hBitmap = CreateCompatibleBitmap(hScreenDC, screenWidth, screenHeight);
    SelectObject(hMemoryDC, hBitmap);
    BitBlt(hMemoryDC, 0, 0, screenWidth, screenHeight, hScreenDC, 0, 0, SRCCOPY);
    GetBitmapBits(hBitmap, screenshot.total() * screenshot.elemSize(), screenshot.data);

    cv::imwrite(locate, screenshot);

    ReleaseDC(hDesktop, hScreenDC);
    DeleteDC(hMemoryDC);
    DeleteObject(hBitmap);
}
