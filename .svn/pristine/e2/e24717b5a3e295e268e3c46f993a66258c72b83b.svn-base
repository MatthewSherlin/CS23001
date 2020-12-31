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
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);
    }

    {
      //------------------------------------------------------
      //2 Setup fixture
      bigint bi(21);

      // Test
      bi = bi.times10(4);

      // Verify
      assert(bi == "210000");
    }
    
    {
      //------------------------------------------------------
      //3 Setup fixture
      bigint bi("3242453434346346363");

      // Test
      bi = bi.times10(2);

      // Verify
      assert(bi == "324245343434634636300");
    }

    {
      //------------------------------------------------------
      //4 Setup fixture
      bigint bi(3);

      // Test
      bi = bi.times10(2);

      // Verify
      assert(bi == 300);
    }

    {
      //------------------------------------------------------
      //5 Setup fixture
      bigint bi(61);

      // Test
      bi = bi.times10(1);

      // Verify
      assert(bi == 610);
    }

    {
      //------------------------------------------------------
      //6 Setup fixture
      bigint bi(3);

      // Test
      bi = bi.times10(1);

      // Verify
      assert(bi == 30);
    }

    {
      //------------------------------------------------------
      //7 Setup fixture
      bigint bi("5346346");

      // Test
      bi = bi.times10(1);

      // Verify
      assert(bi == "53463460");
    }

    {
      //------------------------------------------------------
      //8 Setup fixture
      bigint bi("63495798345");

      // Test
      bi = bi.times10(4);

      // Verify
      assert(bi == "634957983450000");
    }


    std::cout << "Done testing times10" << std::endl;
}

