#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  str("a");
    String str2("a");
    // TEST
    bool result = (str == str2);

    // VERIFY
    assert(str    == "a");
    assert(str2 == "a");
    assert(result == true);
  }
  //2 SETUP FIXTURE
  String  str("a");
  String str2("b");
  // TEST
  bool result = (str == str2);

  // VERIFY
  assert(str    == "a");
  assert(str2 == "b");
  assert(result == false);
  {

    std::cout << "Done testing Equal." << std::endl;
  }
}
