// bigint Test Program
//
// Tests:  int constructor, uses ==
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
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test 
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      //2 Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      //3 Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
 {
        //------------------------------------------------------
        //4 Setup fixture
        bigint left("12312123234");
        bigint right("9958526");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "12312123234");
        assert(right  == "9958526");
        assert(result == "12322081760");
    }
 {
        //------------------------------------------------------
        //5 Setup fixture
        bigint left("6518111811285285");
        bigint right("5553922");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "6518111811285285");
        assert(right  == "5553922");
        assert(result == "6518111816839207");
    }
 {
        //------------------------------------------------------
        //6 Setup fixture
        bigint left("4911621226695524851955");
        bigint right("7814943291155");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "4911621226695524851955");
        assert(right  == "7814943291155");
        assert(result == "4911621234510468143110");
    }
 {
        //------------------------------------------------------
        //7 Setup fixture
        bigint left("11111111111222222222221111225585555221122142555");
        bigint right("444444444444744484455444444444");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "11111111111222222222221111225585555221122142555");
        assert(right  == "444444444444744484455444444444");
        assert(result == "11111111111222222666665555670330039676566586999");
    }
 {
        //------------------------------------------------------
        //8 Setup fixture
        bigint left("555555555555");
        bigint right("6666666666666");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "555555555555");
        assert(right  == "6666666666666");
        assert(result == "7222222222221");
    }
 {
        //------------------------------------------------------
        //9 Setup fixture
        bigint left(10);
        bigint right(10);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 10);
        assert(right  == 10);
        assert(result == 20);
    }
 {
        //------------------------------------------------------
        //10 Setup fixture
        bigint left("4726494114694676454646492916154346264646164616162649461613164616");
        bigint right("19555558848484546666666666666666");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "4726494114694676454646492916154346264646164616162649461613164616");
        assert(right  == "19555558848484546666666666666666");
        assert(result == "4726494114694676454646492916154365820205013100709316128279831282");
    }
 {
        //------------------------------------------------------
        //11 Setup fixture
        bigint left("14455555555");
        bigint right("65559956996");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "14455555555");
        assert(right  == "65559956996");
        assert(result == "80015512551");
    }
 {
        //------------------------------------------------------
        //12 Setup fixture
        bigint left("111111111489696655");
        bigint right("644588988852");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "111111111489696655");
        assert(right  == "644588988852");
        assert(result == "111111756078685507");
    }
 {
        //------------------------------------------------------
        //13 Setup fixture
        bigint left(5);
        bigint right(3);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 5);
        assert(right  == 3);
        assert(result == 8);
    }
 {
        //------------------------------------------------------
        //14 Setup fixture
        bigint left("999988888877777");
        bigint right("66666555554444444");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "999988888877777");
        assert(right  == "66666555554444444");
        assert(result == "67666544443322221");
    }
 {
        //------------------------------------------------------
        //15 Setup fixture
        bigint left("355662636178");
        bigint right("255555595558");
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == "355662636178");
        assert(right  == "255555595558");
        assert(result == "611218231736");
    }
    
    std::cout << "Done with testing addition." << std::endl;
}

