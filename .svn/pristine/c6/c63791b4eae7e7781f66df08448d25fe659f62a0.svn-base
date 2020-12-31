// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
      //1 Setup
      bigint bi(4);

      // Test
      int digit = bi[0];

      // Verify
      assert(bi    == 4);
      assert(digit == 4);
    }
    {
      //2 Setup
      bigint bi("123456789");

      // Test
      int digit = bi[3];

      // Verify
      assert(bi    == "123456789");
      assert(digit == 6);
    }
    {
      //3 Setup
      bigint bi("3182029");

      // Test
      int digit = bi[4];

      // Verify
      assert(bi    == "3182029");
      assert(digit == 8);
    }

    {  //4 Setup
    bigint bi("235362463");

    // Test
    int digit = bi[6];

    // Verify
    assert(bi    == "235362463");
    assert(digit == 5);
}
{
  //5 Setup
  bigint bi("43823477293749347");

  // Test
  int digit = bi[11];

  // Verify
  assert(bi    == "43823477293749347");
  assert(digit == 4);
}

    std::cout << "Done testing subscript." << std::endl;
}

