#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <stack>


class Complex{
 public:


  // default constructor
  Complex():real(0), ima(0){};
  // default destructor
  ~Complex();
  // implement constructor that takes 2 numbers as input parameters
  Complex(float& a, float& b):real(a), ima(b){};
  // implement a copy constructor
  Complex(const Complex &p2);
  // implement an assignment operator
  Complex& operator=(const Complex &p3);
  // define real and imaginary part
  float real;
  float ima;
 
  // below here, we assume complex1, complex2 are instances of Complex.
  // define your functions to enable operator overloadings.


  //q5_1 complex++
  Complex& operator ++();
  //q5_2 --complex
  Complex& operator --();
  //q5_3 complex1 > complex2
  bool operator >(const Complex &p3) const;
  //q5_4 complex * (an float number)
  Complex& operator *(const float &s);
  //q5_5 complex1 += complex2
  Complex& operator +=(const Complex &p4);
  //q5_6 complex2 += (an float number)
  Complex& operator +=(const float &s);
};

#endif