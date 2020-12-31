#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
  std::ifstream in("data1-2.txt");    // Define stream for input

  if(!in) {                           // Make sure it opened correctly.
    std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
    exit(1);
  } 
  bigint one;
  bigint two;

  while(in >> one && in >> two){
    std::cout<<"Bigint One: " << one << std::endl;
    std::cout<<"Bigint Two: "<< two << std::endl;
    bigint product = one * two;
    std::cout<<"Product of the bigints equals " << product << std::endl;
  }   
  //Until end of file
  //Read two bigints
  //Print them out
  //Add them together
  //Print out results
 
  in.close();
  return 0;
}




