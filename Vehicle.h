#pragma once

#include <iostream>
#include "Shape.h"

using namespace std;


class Vehicle : public Drawable{
    virtual void Drive()=0;
};