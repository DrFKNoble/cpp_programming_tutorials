#include <QCoreApplication>

#include "main.hpp"

Bike::Bike(int initialSpeed)
{
    setSpeed(initialSpeed);
}

Bike::~Bike()
{
}

void Bike::pedal()
{
    setSpeed(speed + 1);
    std::cout << "Pedaling. Speed: " << speed << " m/s" << std::endl;

    return;
}

void Bike::brake()
{
    setSpeed(speed - 1);
    std::cout << "Braking. Speed: " << speed << " m/s" << std::endl;

    return;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Bike myBike(5);

    myBike.pedal();
    myBike.pedal();
    myBike.brake();

    return a.exec();
}
