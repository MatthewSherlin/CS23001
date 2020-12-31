y#include "utilities.hpp"
#include <iostream>
#include <fstream>
#include "string.hpp"
#include "stack.hpp"

int main(int argc, char*  argv[]){

  std::ifstream infixFile(argv[1]);

  if(!infixFile) {                           // Make sure it opened correctly.
    std::cerr << "Error" << std::endl;

  }else{

    if(argc == 2){
      String token;
      String infix;
      while (!infixFile.eof()){
	infixFile >> token;
	if(token != ";")
	  infix = infix + token + " ";
	else{
	  infix=infix+";";//To make sure that the loop finishes
	  String final = inToPost(infix);
	  std::cout << final << std::endl;
	  infix = "";
	}
      }
    }
    if(argc == 3){
      std::ofstream postfixFile(argv[2]);
      String token;
      String infix;

      while(!infixFile.eof()){
	infixFile >> token;
	if(token != ";")
	  infix = infix+token+" ";
	else{
	  infix=infix+";";//To make sure that the loop finishes
	  postfixFile << infix << std::endl;
	  String result = inToPost(infix);
	  postfixFile << result << std::endl;
	  infix = "";
	}
      }
      postfixFile.close();
    }



    std::cout << "Finished" << std::endl;
    infixFile.close();
  }
  return 0;
}
