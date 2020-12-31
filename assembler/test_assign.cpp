//  Stack class test program
//
//  Tests: Assign
//

#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "string.hpp"

//==========================================================================
 int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int> x;
    stack<int> j;

    // TEST
    x.push(10);
    j = x;

    // VERIFY
    assert(x.empty() == false);
    assert(j.empty() == false);
    assert(j.top() == 10);
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String> x;
    stack<String> j;

    // TEST
    x.push("poo");
    j = x;

    // VERIFY
    assert(x.empty() == false);
    assert(j.empty() == false);
    assert(j.top() == "poo");
  }

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<char> x;
    stack<char> j;

    // TEST
    x.push('a');
    j = x;

    // VERIFY
    assert(x.empty() == false);
    assert(j.empty() == false);
    assert(j.top() == 'a');
  }

  // ADD ADDITIONAL TESTS AS NECESSARY

  std::cout << "Done testing assign." << std::endl;

}
