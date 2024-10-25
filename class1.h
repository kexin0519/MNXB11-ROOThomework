#ifndef __CLASS1_H__
#define __CLASS1_H__

#include <TObject.h>

class class1 : public TObject {
    public:
    class1(); //default constructor
    class1(Int_t variable); //some other constructor
    virtual ~class1(); 

    private:
    Int_t fVariable; //some private members

    ClassDef(class1,1);
};

#endif //__CLASS1_H__