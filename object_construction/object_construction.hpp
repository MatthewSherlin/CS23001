#include <iostream>

#ifndef OBJECT_CONSTRUCTION
#define OBJECT_CONSTRUCTION

class MyClass{
private:

public:
  MyClass();
  MyClass& operator= (const MyClass&);
  MyClass(const MyClass&);
  ~MyClass();

};

#endif
