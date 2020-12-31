//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"


////////////////////////////////////////////////////////// 
// REQUIRES:   
// ENSURES: 
//
LogEntry::LogEntry(String s) {
    std::vector<String> vec = s.split(' ');
    if(vec.size()!= 10){
      return;
    }
    else{
    host = vec[0];
    time.setTime(date.setDate(vec[3]));
    request = (vec[5]+vec[6]+vec[7]);
    status = vec[8];
    if((vec[9]) == '-')
      number_of_bytes = 0;
    else
      number_of_bytes = toInt(vec[9]);
	}
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
  std::vector<LogEntry> result;
  char ch[1000];

  while(!in.eof()){
    in.getline(ch, 1000);
    if(in.eof()){
      break;
    }
    String str = ch;
    result.push_back(str);
  }
  return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry>& logs) {
  int i = 0;

  while(i < int(logs.size())){
    logs[i].printContents(out);
    std::cout << std::endl;
    ++i;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& logs) {
  int i = 0;

  while (i < int(logs.size())) {
    out << logs[i].getHost() << std::endl;
    i++;
  }
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry>& logs) {
  int i = 0;
  int sum = 0;

  while (i < int(logs.size())) {
    sum  = sum + logs[i].numberOfBytes();
    i++;
  }
  return sum;

}

/////////////////////////////////////////////////////////
//
// Created Functions
//
//

void LogEntry::printContents(std::ostream& out) const{
  out << host << " ";
  date.printDate(out);
  out << " ";
  time.printTime(out);
  out << " " << request << " " << status << " " << number_of_bytes;
}

void Date::printDate(std::ostream& out) const{
  out << month << " " << day << " " << year;
}

void Time::printTime(std::ostream& out) const {
  out << hour << " " << minute << " " << second;
}

std::vector<String> Date::setDate(String str){
  std::vector<String> date = str.split('/');
  std::vector<String> timeVec = date[2].split(':');

  date[0] = (date[0].split('['))[1];
  month = date[1];
  day = date[0];
  year = toInt(timeVec[0]);

  return timeVec;

}

void Time::setTime(std::vector<String> str) {
  hour = toInt(str[1]);
  minute = toInt(str[2]);
  second = toInt(str[3]);
}

std::ostream& operator<<(std::ostream& out, const LogEntry& str) {
  out << str;
  return out;
}

int toInt(String str) {
  int num = 0, i = 0;
  while (i < str.length()) {
    num = num * 10 + (str[i] - '0');
    i++;
  }
  return num;
}
