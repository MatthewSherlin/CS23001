#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE


    char ch[4] = {'p','o','o','p'};
        
    String  str(ch);

    // TEST
    char result = str[0];
    std::cout << "Subscript Result: " << result << std::endl;
    // VERIFY
    assert(str    == String(ch));
    assert(result == 'p');
  }
}
