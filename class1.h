#ifndef __CLASS1_H__
#define __CLASS1_H__

#include <TObject.h>
// some new code in here soon

#endif //__CLASS1_H__

 class class1 : public TObject {
    public:
    class1(); // default constructor
    class1(Int_t variable); // some other constructor
    virtual ~class1(); // destructor
    
    private:
 // some private members

 ClassDef(class1, 1); // your_class
 
 };