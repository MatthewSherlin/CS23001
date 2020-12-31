#include "string.hpp"
#include <cassert>
#include <iostream>


//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String one = "fartdumb";
    String result = one.substr(0,0);
    std::cout << "String length: " << result.length() << std::endl;
    std::cout << "String Capacity: " << result.capacity() << std::endl;
    std::cout << "Substr Result: " << result << std::endl;
    assert(one.substr(0,0) == "f");
  }
}
