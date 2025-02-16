#pragma once

#include <iostream>
#include "Drawable.h"

using namespace std;

class Shape :public Drawable{
public:
  int getTotalArea(Shape* s[]);
};


void draw(Shape& s){
    s.draw();
}