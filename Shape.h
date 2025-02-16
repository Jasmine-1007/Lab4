#pragma once

#include <iostream>
#include "Drawable.h"

using namespace std;

class Shape :public Drawable{
public:
  virtual int getTotalArea() =0;
};


