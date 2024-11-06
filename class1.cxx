#include "class1.h"
#include <cmath>

class1::class1() : radius(0.0) {}    //default constructor- ROOT needs the default one where everything is set to 0

class1::class1(double r) : radius(r) {}

class1::~class1() {}

double class1::calculateVolume() const {    //calculated the volume
    return (4.0 / 3.0) * M_PI * std::pow(radius, 3);
}

void class1::setRadius(double r) {
    radius = r;
}

double class1::getRadius() const {
    return radius;
}

ClassImp(class1)
