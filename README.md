# Operator_overloading

> Write a class to implement how complex number works in mathematics. A complex number can be expressed 
as **a+bi**, where a and b are real numbers. You are given an incomplete class `Complex`:

```c++
class Complex{
 public:

  Complex():real(0), ima(0){};
  ~Complex();
  float real;
  float ima;
```

Tasks:
1. implement a constructor that takes the initial real and imaginary number as 2 parameters.

2. implement a copy constructor.

3. implement a copy assignment operator.

4. the class will support '++' (as postfix) and '--' (as prefix) operators.
  - `complex++` should increase the real part by 1. 
  - `--complex` should decrease the real part by 1.
    - Example: `c=Complex(1,2); c++;`, *c=2+2i*
    - Example: `c=Complex(1,2); --c;`, *c=0+2i*

5. the class will support '>' operator, which return a boolean data:
  - if both real and imaginary part of left hand side is larger than the right hand side, the answer will be true, otherwise, the answer is false.
    - Example: (1+2i) > (0+3i) = *false*

6. the class will support '*' operator, which multiplies a real number:
  - the function returns a Complex object, which is multiplied both the real and imaginary parts.
    - Example: `c=Complex(1,2); d=Complex(); d=c*2;`, *d=2+4i*
    
7. the class will support '+=' operator on either float number and Complex object:
  - data type before '+=' must be a Complex object.
    - Example: `c=Complex(1,2); d=Complex(3,4); c+=d;`, *c=4+6i*
    - Example: `c=Complex(1,2); float d=2; c+=d;`, *c=3+2i*



## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/Operator_overloading.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
You can run unit tests using [`blaze`](#installing-bazel):

```bash
bazel test tests:tests
```

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
