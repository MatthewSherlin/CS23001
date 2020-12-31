#include "string.hpp"
#include <cassert>
#include <iostream>
#include <fstream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    std::ifstream inFile;
    inFile.open("test_text.txt");
    
    String one;
    while(inFile >> one){
      std::cout << one << std::endl;
    }
    
    inFile.close();
    std::cout << "Done testing input operator" << std::endl;

  }
}
