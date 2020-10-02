#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() 
{
      float real =5;
      float ima=7;
      Complex s(real,ima);
      Complex d=s;
      Complex e;
      e=s;

      float real1 =1;
      float ima1  =0;
      Complex f(real1,ima1);

      std::cout<<"copy = oper   ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;
      //Complex g
      e.operator++();
      std::cout<<"++ operator   ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;
      e.operator--();
      std::cout<<"-- operator   ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;
      e.operator*(4);
      std::cout<<"* operator    ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;
      e.operator+=(5.0);
      std::cout<<"+= operator   ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;
      std::cout<<e.real<<" "<<e.ima<<" + "<<f.real<<" "<<f.ima<<std::endl;
      e+=(f);
      std::cout<<"+= operator   ";
      std::cout<<e.real<<" "<<e.ima<<std::endl;

      std::cout<<"> operator    ";
      std::cout<<((e>f)?"true":"false")<<std::endl;

  return 0;
}