//  Stack class test program
//
//  Tests: Destructor
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
    x.push(10);
    x.~stack();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  x;

    // TEST
    x.push(1);
    x.~stack();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String>  x;

    // TEST
    x.push("poop");
    x.~stack();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char>  x;

    // TEST
    x.push('x');
    x.~stack();

    // VERIFY
    assert(x.empty() == true);
  }

  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing destructor." << std::endl;
}
