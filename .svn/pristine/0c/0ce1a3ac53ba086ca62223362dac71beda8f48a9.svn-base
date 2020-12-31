#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
const int CAPACITY = 400;

class bigint{
public:

  bigint();
  bigint(int);
  bigint(const char[]);

  void  debugPrint(std::ostream&)const;
  bigint timesDigit(int) const;
  bigint times10(int) const;

  friend std::ostream& operator<<(std::ostream&, bigint);
  friend std::istream& operator>>(std::istream&, bigint&);
 
  bool operator==(const bigint&)const;
  bigint operator+(const bigint&);
  int operator[](int i) const;
  bigint operator*(bigint&);

private:

  int array[CAPACITY];
  void init();

};

#endif
