//  Stack class test program
//
//  Tests: Copy constructor
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//=========================================================================
 int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  x;

    // TEST
    x.push(10);
    stack<int> copyCtr(x);

    // VERIFY
    assert(x.top() == copyCtr.top());
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char>  x;

    // TEST
    x.push('a');
    stack<char> copyCtr(x);

    // VERIFY
    assert(x.top() == copyCtr.top());
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String>  x;

    // TEST
    x.push("poop");
    stack<String> copyCtr(x);

    // VERIFY
    assert(x.top() == copyCtr.top());
  }


  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing copy constructor." << std::endl;
}
