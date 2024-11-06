#ifndef CLASS1_H
#define CLASS1_H

#include <TObject.h>

class class1 : public TObject {
public:
    class1();    //default constructor
    class1(double radius);    //Constructor
    virtual ~class1();

    double calculateVolume() const;    //calculate the volume of the sphere
    void setRadius(double r);    //set the radius
    double getRadius() const;    //get the radius

private:
    double radius;

    ClassDef(class1, 1);
};

#endif // CLASS1_H
