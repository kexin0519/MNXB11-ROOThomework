#ifndef __CLASS1_H__
#define __CLASS1_H__

#include <TObject.h>
// some new code in here soon

ClassDef(class1, 1);
ClassImp(class1)

 // default constructor- ROOT needs the default one where everything is set to 0
 class1::class1() : fVariable(0)// initialize all members to null
 {
 }
 // another constructor
 class1::class1(Int_t variable) : fVariable(variable) {

 } 
 // destructor
 class1::~class1(){
 // right now I’m empty
 }
#endif //__CLASS1_H__