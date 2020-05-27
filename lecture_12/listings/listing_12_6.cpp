#include <iostream>

void swap(int &rX, int &rY);

int main()
{
    int x = 10, y = 20;

    std::cout << "main(). Before swap(). x: " << x << ", y: " << y << std::endl;

    swap(x, y);

    std::cout << "main(). After swap(). x: " << x << ", y: " << y << std::endl;

    return 0;
}

void swap(int &rX, int &rY)
{
    int temp;

    std::cout << "swap(). Before swap. x: " << rX << ", y: " << rY << std::endl;

    temp = rX;
    rX = rY;
    rY = temp;

    std::cout << "swap(). After swap. x: " << rX << ", y: " << rY << std::endl;

    return;
}