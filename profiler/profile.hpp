/*
 *  profile.hpp
 *
 *  Created by Jonathan Maletic.
 *  Copyright 2019 Kent State University. All rights reserved.
 *  Fall 2019
 *  Modified by:
 *
 */

#ifndef INCLUDES_PROFILE_H_
#define INCLUDES_PROFILE_H_

#include <iostream>
#include <cassert>
#include <string>
#include <map>

std::string intToString(int);


////////////////////////////////////////////////////////////////////////
//  A map of line numbers or line number function names and the number
//   of times each was called.
// 
//
class profile {
public:
           profile (std::string fn="") : fname(fn)         {};
    void   count   (int line, const std::string& funcName) { stmt[intToString(line) + " " + funcName] += 1; }
    void   count   (int line)                              { stmt[intToString(line)] += 1; }
    
    friend std::ostream& operator<< (std::ostream&, const profile&);
private:
    std::string                 fname;   // File name.
    std::map<std::string, int>  stmt;    // (line# X times called)
};


#endif
