#include <iostream>
#include "Rectangle.h"

using namespace std;

void Rectangle:: draw(){
    cout<<"******"<<endl;
    cout<<"*    *"<<endl;
    cout<<"*    *"<<endl;
    cout<<"******"<<endl;
}


int Rectangle:: calcArea(){
    return height * width;
}

Rectangle::Rectangle(int width, int height){
    this->width = width;
    this->height = height;
}

