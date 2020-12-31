//  Stack class test program
//
//  Tests: Push and pop
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
    x.push(1);
    assert(x.empty() == false);
    x.pop();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String>  x;

    // TEST
    x.push("poop");
    assert(x.empty() == false);
    x.pop();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char>  x;

    // TEST
    x.push('a');
    assert(x.empty() == false);
    x.pop();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  x;

    // TEST
    x.push(1);
    x.push(2);
    assert(x.empty() == false);
    x.pop();
    x.pop();

    // VERIFY
    assert(x.empty() == true);
  }

  {
    //------------------------------------------------------
    stack<String>  x;

    // TEST
    x.push("poop");
    x.push("1234");
    assert(x.empty() == false);
    x.pop();
    x.pop();

    // VERIFY
    assert(x.empty() == true);

  }

  {
    //------------------------------------------------------
    stack<char>  x;

    // TEST
    x.push('a');
    x.push('b');
    assert(x.empty() == false);
    x.pop();
    x.pop();

    // VERIFY
    assert(x.empty() == true);

  }



  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing push and pop." << std::endl;
}
