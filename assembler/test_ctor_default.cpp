//  Stack class test program
//
//  Tests: Default Ctor
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//========================================================================

 int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  x;

    // TEST
    // generic default testing

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String>  x;

    // TEST
    // generic default testing

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char>  x;

    // TEST
    // generic default testing

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<double>  x;

    // TEST
    // generic default testing

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<float>  x;

    // TEST
    // generic default testing

    // VERIFY
    assert(x.empty() == true);
  }

  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing default ctor." << std::endl;
}
