#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('X');

    // VERIFY
    assert(str == 'X');
  }


  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('A');

    // VERIFY
    assert(str == "A");
  }



  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('a');

    // VERIFY
    assert(str == "a");
  }


  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str('Z');

    // VERIFY
    assert(str == 'Z');
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str(' ');

    // VERIFY
    assert(str == ' ');
  }

  std::cout << "Done testing Char Ctor." << std::endl;
}
