#include <iostream>
#include "Shape.cpp"

using namespace std;


class Rectangle :public Shape{
    int width;
    int height;

public:
    void draw();
    int calcArea();

};