#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("abcdef");
    String str2("abc");
    // TEST
    bool result = (str2 < str);

    // VERIFY
    assert(str    == "abcdef");
    assert(str2 == "abc");
    assert(result == true);
  }
}
