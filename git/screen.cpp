#include "screen.h"
#include <iostream>
#include "opencv2/opencv.hpp"
#include "Windows.h"
#include <opencv2/imgproc/imgproc.hpp>

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
void Screen::screenshotregion(std::string locate, int x, int y)
{
    HWND hDesktop = GetDesktopWindow();


    RECT desktopRect;
    GetWindowRect(hDesktop, &desktopRect);
    int screenWidth = x;
    int screenHeight = y;


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

std::pair<bool, std::pair<int,int>>Screen::locateonscreen(std::string imgREF, std::string imgFIND, double confidence)
{
    cv::Mat largerImage = cv::imread(imgREF);
    cv::Mat smallerImage = cv::imread(imgFIND);

    if (largerImage.empty() || smallerImage.empty()) {
        std::cerr << "Erro: Imagem vazia." << std::endl;
        return {false, {0,0}};
    }

    cv::Mat result;
    cv::matchTemplate(largerImage, smallerImage, result, cv::TM_CCOEFF_NORMED);

    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc);

    
    double threshold = confidence;

    if (maxVal >= threshold) {
        std::cout << "a imagem menor esta contida na imagem maior" << std::endl;
        return {true, {maxLoc.x, maxLoc.y}};
        
    }
    else {
        std::cout << "a imagem menor nao esta contida na imagem maior" << std::endl;
        return {false, {0,0}};
    }


}
std::pair<bool, std::pair<int, int>>Screen::locatecenteronscreen(std::string imgREF, std::string imgFIND, double confidence)
{
    cv::Mat largerImage = cv::imread(imgREF);
    cv::Mat smallerImage = cv::imread(imgFIND);

    if (largerImage.empty() || smallerImage.empty()) {
        std::cerr << "Erro: Imagem vazia." << std::endl;
        return { false, {0,0} };
    }

    cv::Mat result;
    cv::matchTemplate(largerImage, smallerImage, result, cv::TM_CCOEFF_NORMED);

    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc);


    double threshold = confidence;

    if (maxVal >= threshold) {
        int largura = smallerImage.cols;
        int altura = smallerImage.rows;
        int center_x = maxLoc.x + (largura / 2);
        int center_y = maxLoc.y + (altura / 2);
        std::cout << "Tamanho da imagem - Altura: " << altura << " pixels, Largura: " << largura << " pixels" << std::endl;
        std::cout << "a imagem menor esta contida na imagem maior" << std::endl;
        std::cout << "no local x: " << maxLoc.x << " y: " << maxLoc.y << std::endl;
        return { true, {center_x, center_y}};

    }
    else {
        std::cout << "a imagem menor nao esta contida na imagem maior" << std::endl;
        return { false, {0,0} };
    }
}

