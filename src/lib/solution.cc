#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

Complex::~Complex()
{
std::cout<<"Destructor!"<<std::endl; 
} 

// implement a copy constructor.
Complex::Complex(const Complex &p2)
{
    Complex::real=p2.real;
    Complex::ima =p2.ima;
    std::cout<<"Constructor!"<<std::endl; 
}

// implement a copy assignment operator.
Complex& Complex::operator=(const Complex &p3)
{
    Complex::real=p3.real;
    Complex::ima =p3.ima;
    std::cout<<"Copy Constructor!"<<std::endl; 
    return *this;
}

//q5_1 complex++
Complex& Complex::operator ++()
{
    Complex::real++;
    return *this;
}



//q5_2 --complex
Complex& Complex::operator --()
{
    --Complex::real;
    return *this;
}

//q5_3 complex1 > complex2
bool Complex::operator >(const Complex &p3) const
{
    return (((Complex::real>p3.real)&&(Complex::ima>p3.ima))?true:false);
}



//q5_4 complex * (an float number)
Complex& Complex::operator *(const float &s)
{
    Complex::real=Complex::real*s;
    Complex::ima =Complex::ima*s;
    return *this;
}


//q5_5 complex1 += complex2
Complex& Complex::operator +=(const Complex &p4)
{
    Complex::real=Complex::real+(p4.real);
    Complex::ima =Complex::ima +(p4.ima);
    return *this;
}

//q5_6 complex2 += (an float number)
Complex& Complex::operator +=(const float &p5)
{
    Complex::real=Complex::real+p5;
    //Complex::ima =Complex::ima +p5;
    return *this;
}


