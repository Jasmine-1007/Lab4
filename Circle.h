#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;


class Circle{
    int radius;



public:
    void draw();
    int calcArea();
    Circle(int i);

};