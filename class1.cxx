#ifndef __CLASS1_H__
#define __CLASS1_H__

#include <TObject.h>
// some new code in here soon

#endif //__CLASS1_H__

ClassImp(class1)

 // default constructor- ROOT needs the default one where everything is set to 0
 class1::class1() : // initialize all members to null
 {
 }
 // another constructor
 class1::class1(Int_t variable) :
 // something should go here
 {
 }
 // destructor
 class1::~class1(){
 // right now I’m empty
 }