#include "engine.h"
#include <iostream>
#include <string.h>

using namespace std;

Engine::Engine() : horsepower(0), displacement(0.0) {}


Engine::Engine(int horsepower, double displacement)
{
    this->horsepower = horsepower;
    this->displacement = displacement;
}

int Engine::getHorsepower() const
{
    return horsepower;
}

void Engine::setHorsepower(int newHorsepower)
{
    horsepower = newHorsepower;
}




double Engine::getDisplacement() const
{
    return displacement;
}

void Engine::setDisplacement(double newDisplacement)
{
    displacement = newDisplacement;
}

