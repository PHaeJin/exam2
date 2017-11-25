#include <iostream>
#include "vector.h"

void Vector::print()
{
    std::cout<<"("<<this->x_<<","<<this->y_<<")"<<std::endl;
}
Vector Vector::operator+(const Vector& v2)
{
    return Vector(this->x_+v2.x_,this->y_+v2.y_);
}

