#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;


class Rectangle :public Shape{
    int width;
    int height;

public:
    void draw();
    int calcArea();
    Rectangle(int width, int height);


};