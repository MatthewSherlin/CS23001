// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
   {
        //------------------------------------------------------
        //1 Setup fixture
        bigint bi(3);

        // Test 
        bi = bi.timesDigit(2);

        // Verify
        assert(bi == 6);
    }
     
    {
      //------------------------------------------------------
      //2 Setup fixture
      bigint bi("32324");

      // Test
      bi = bi.timesDigit(3);

      // Verify
      assert(bi == "96972");  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //3 Setup fixture
      bigint bi(35);

      // Test
      bi = bi.timesDigit(9);

      // Verify
      assert(bi == 315);  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //4 Setup fixture
      bigint bi(453);

      // Test
      bi = bi.timesDigit(7);

      // Verify
      assert(bi == "3171");  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //5 Setup fixture
      bigint bi(3);

      // Test
      bi = bi.timesDigit(5);

      // Verify
      assert(bi == 15);  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //6 Setup fixture
      bigint bi("3435345");

      // Test
      bi = bi.timesDigit(6);

      // Verify
      assert(bi == "20612070");  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //7 Setup fixture
      bigint bi("3692839");

      // Test
      bi = bi.timesDigit(5);

      // Verify
      assert(bi == "18464195");  //Will FAIL, fix and add test cases.
    }

    {
      //------------------------------------------------------
      //8 Setup fixture
      bigint bi("2972");

      // Test
      bi = bi.timesDigit(6);

      // Verify
      assert(bi == "17832");  //Will FAIL, fix and add test cases.
    }

    //Add test cases as needed.
    
    std::cout << "Done testing bigint * digit" << std::endl;

}
