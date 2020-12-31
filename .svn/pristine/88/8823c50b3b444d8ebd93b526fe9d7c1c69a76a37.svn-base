// bigint Test Program
//
// Tests:  multiply, uses ==
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
        result = left * right;
        
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
        result = left * right;
        
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
              //3 Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        //4 Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        //5 Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        //6 Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        //7 Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        //8 Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        //9 Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        //10 Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        //11 Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
     {
        //------------------------------------------------------
        //12 Setup fixture
        bigint left("11468151448565555554468764611121545464946164849949464");
        bigint right("5494646464");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  "11468151448565555554468764611121545464946164849949464");
        assert(right  ==  "5494646464");
        assert(result ==  "63013437805477207699557356868947334863181680643135912946295296");
    }
 {
        //------------------------------------------------------
        //13 Setup fixture
        bigint left("15845987789563");
        bigint right("559555654877");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  "15845987789563");
        assert(right  ==  "559555654877");
        assert(result ==  "8866712074761870130648751");
    }
 {
        //------------------------------------------------------
        //14 Setup fixture
        bigint left("33333255522226666669");
        bigint right("5449854555");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  "33333255522226666669");
        assert(right  ==  "5449854555");
        assert(result ==  "181661394440785903088516327295");
    }
 {
        //------------------------------------------------------
        //15 Setup fixture
        bigint left("999958");
        bigint right("151634259437546166");
        bigint result;

        // Test
        result = left * right;

        // Verify
        assert(left   ==  "999958");
        assert(right  ==  "151634259437546166");
        assert(result ==  "151627890798649789061028");
    }

    std::cout << "Done testing multiply" << std::endl;
}
