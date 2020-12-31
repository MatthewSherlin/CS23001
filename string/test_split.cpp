#include "string.hpp"
#include <cassert>
#include <iostream>
#include <vector>

//===============================================================\
============
 int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    String str = "abc ef gh";
    std::vector<String> result;

    result = str.split(' ');
    std::cout << "String one: " << result[0] << std::endl;
    std::cout << "String two: " << result[1] << std::endl;
    std::cout << "String three: " << result[2] << std::endl;
    assert(result[0] == "abc");
    assert(result[1] == "ef");
    assert(result[2] == "gh");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    String str = "abc-ef-gh";
    std::vector<String> result;

    result = str.split('-');
    std::cout << "String one: " << result[0] << std::endl;
    std::cout << "String two: " << result[1] << std::endl;
    std::cout << "String three: " << result[2] << std::endl;
    assert(result[0] == "abc");
    assert(result[1] == "ef");
    assert(result[2] == "gh");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    String str = "-a--b-";
    std::vector<String> result;

    result = str.split('-');
    std::cout << "String one: " << result[0] << std::endl;
    std::cout << "String two: " << result[1] << std::endl;
    std::cout << "String three: " << result[2] << std::endl;
    std::cout << "String four: " << result[3] << std::endl;
    std::cout << "String five: " << result[4] << std::endl;

    assert(result[0] == "");
    assert(result[1] == "a");
    assert(result[2] == "");
    assert(result[3] == "b");
    assert(result[4] == "");
  }

  std::cout << "Done testing split function" << std::endl;

}
