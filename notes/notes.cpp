// Feb 5th 2020
// CS2

//String ADT
#include <cassert>
#include <iostream>

const int CAPACTIY=100000;

class String{

  public:
  int capacity() const {return CAPACITY - 1;}
  int  length() const;
  string substr(int start, int end);
  int findchar(int, char);

  char operator[](int index) const;
  char& operator[](int index);
char operator

  private:
  char str[CAPACITY];
}

/////////////////////////////////////////////
//
// cpp file definitions
//
////////////////////////////////

int String::findchar(int start, char c){
  assert(start >= 0 && start < length());
int end = length()-1;
int os = -1;
 for(int i = start; i < end; ++i){
   if(str[i] == c){
     os=i;
     break; 
}
 }
 return os;
  }

char String::operator[](int index) const{
  assert(index >= 0 && index < length());
  return str[index];
}
//setter, sets the value if the element in the array
char& String::operator[](int index){
  assert(index >=0 && index<length());
  return str[index];
}

String& string::operator+=(string str2){
  int start = length()-1;

  int len2 = str2.length();
  int end = len1 + len2;
  int os = 0;
  int i = 0;

  for(i=len1; i< size; ++i){
    if (i > CAPACITY-2)
      break;
      str[i]= str2.string[os];
    os++;
  }
  str[i]='\0';
  return *this;
}

String& String::operator+(String s2){
  int start = length()-1;
  int len2 = str2.length();
  int end = len1 + len2;
  int os = 0;
  int i = 0;

  for(i=len1; i< size; ++i){
    if (i > CAPACITY-2)
      break;
    str[i]= str2.string[os];
    os++;
  }
  s1.str[i]='\0';
  return s1;

}

bool String::operator==(String s2) const{
  int size1 = length();
  int size2 = s2.length();

  if(size1 != size2)
    return false;

  for(int i = 0; i <size1; ++i){
    if(str[i] != s2.str[i]
       return false;
  }
    return true;
}

  bool String::operator!= (String str2) const{
    return !(*this == str2);
  }

  bool String::operator< (String str2) const{
    int size1=length();
    int size2=str2.length();

    if(size1 > size2)
      return false;

    for(int i=0;i<size1;++i)
      if(str[i] > str2.str[i])
	return false;
  }
  return true;
}

istream& operator >> (istream& in, String s){
  char buffer[CAPACITY];
  if(in.eof())
    in >> buffer;
  else
    buffer[0] = '\0';

  s=String(buf);
  return in;
}

ostream& operator << (ostream& out, String s){
  int len = s.length();
  for(int i = 0; i < len; ++i)
    out<<s.str[i];
  out << std::endl;
  return out;
}

//////////////////////////////////////////////////////
//
// February 10th, 2020
//
//////////////////////////////////////////

// Exam next week during Lab sessions (Thursday)
// fixing errors from last weeks code again
// Pointers

/* 
Stack: stores local variables, removed when function ends.
Heap: Contains dynamically allocated variables.

*/

bigint bigint::operator+(const bigint& rhs) const{
  bigint result;
  int carry;
  int sum;
  for(int i=0;i<CAPACITY; ++i){
    sum= array[i] + rhs.array[i] + carry;
    if(sum > 9)
      carry=1;
    else
      carry=0;
    result.array[i]=sum%10;
  }
  return result;
}

String String::operator+(const String& rhs) const{
  String result(str);
  int len;
  int index;

  while(rhs.str[index] != 0){
    if(len + index == STRING_SIZE)
      break;
    result.str[len + index] = rhs.str[index];
    ++index;
  }
  result.str[len + index] = 0;
  return result;
}

Bigint::Bigint(const charArray[]){
  int charArraySize=0;
  int bigArraySize=0;
  while(charArray[charArraySize] != '\0')
    ++charArraySize;
  --charArraySize;
  While(charArraySize >= 0 ){
    bigArray[bigArraySize] = charArray[charArraySize] - '0';
    ++bigArraySize;
    --charArraySize;
  }
}

String::String(const char charArray[]) const{
  int i=0;
  while(charArray[i] != 0){
    str[i] = charArray[i];
    ++i;
  }
  str[i] = '\0';
}

///////////////////////
// Test Case Addition

Bigint one = "324235";
Bigint two = "23423";
Bool result = false;

result=

assert(one == "

