#include <iostream>
#include "Drawable.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

class Shape :public Drawable{
    virtual int getTotalArea(Shape* s[]) = 0;
};


void draw(Shape& s){
    s.draw();
}