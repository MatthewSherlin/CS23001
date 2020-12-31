#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str1 = "farting";
        
    int resultOne = str1.length();
    int resultTwo = str1.capacity();
        
    std::cout << "length: " << resultOne << std::endl;
    std::cout << "Capacity: " << resultTwo << std::endl;
    assert(resultOne == 7);
    assert(resultTwo == 7);
    
  }
}
