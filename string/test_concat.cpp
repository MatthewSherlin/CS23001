#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("abc");
    String str2("123");

    // TEST
    String result = str + str2;
    std::cout << "Concat Result: " << result << std::endl;

    // VERIFY
    assert(str    == "abc");
    assert(str2  == "123");
    assert(result == "abc123");
  }
  {
    //------------------------------------------------------
    //2 SETUP FIXTURE
    String  str("poop");
    String str2("123");

    // TEST
    String result = str + str2;
    std::cout << "Concat Result: " << result << std::endl;

    // VERIFY
    assert(str    == "poop");
    assert(str2  == "123");
    assert(result == "poop123");
  }
  std::cout << "Done testing Concat." << std::endl;
}
