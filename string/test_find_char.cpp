#include "string.hpp"
#include <cassert>
#include <iostream>


//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String one = "monkeypoopsling";
    char two = 'k';
        
    int result = one.findch(0, two); 
    std::cout << "FindChar Result: " << result << std::endl;
        
    assert(result == 3);
    
  }
}

