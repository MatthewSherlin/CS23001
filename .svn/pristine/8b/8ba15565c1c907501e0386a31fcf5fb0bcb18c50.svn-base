#include "string.hpp"
#include <cassert>
#include <iostream>

///////////////////////////////////////////////////////////////
int main ()
{
  {
    /////////////////////////////////////////////////////////
    // SETUP FIXTURE

    // TEST
    String str("acdc");
    String str2("kruleisgreater");

    str.swap(str2);

    // VERIFY
    assert(str == "kruleisgreater");
    assert(str2 == "acdc");
  }
  {
    /////////////////////////////////////////////////////////
    // SETUP FIXTURE

    // TEST
    String str("");
    String str2("kruleking");

    str2.swap(str);

    // VERIFY
    assert(str == "kruleking");
    assert(str2 == "");
  }
  {
    /////////////////////////////////////////////////////////
    // SETUP FIXTURE

    // TEST
    String str("12345");
    String str2("edgar");

    str.swap(str2);

    // VERIFY
    assert(str == "edgar");
    assert(str2 == "12345");
  }

  {
    /////////////////////////////////////////////////////////
    // SETUP FIXTURE

    // TEST
    String str("12345");
    String str2("12345");

    str.swap(str2);

    // VERIFY
    assert(str == "12345");
    assert(str2 == "12345");
  }

  {
    /////////////////////////////////////////////////////////
    // SETUP FIXTURE

    // TEST
    String str("");
    String str2("");

    str.swap(str2);

    // VERIFY
    assert(str == "");
    assert(str2 == "");
  }

  std::cout<<"Done testing swap function"<<std::endl;

}
