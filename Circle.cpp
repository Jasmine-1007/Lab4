#include <iostream>
#include"Circle.h"

using namespace std;



void Circle:: draw(){
    cout<<"   *****"<<endl;
    cout<<" *       *"<<endl;
    cout<<"*         *"<<endl;
    cout<<" *       *"<<endl;
    cout<<"   *****"<<endl;
}


int Circle:: calcArea(){
    return 3.14*radius*radius;
}


 Circle::Circle(int i){
    this->radius = i;
}


