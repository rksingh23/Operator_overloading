#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

// Add your own tests in this file
TEST(Q5_Student, TEST1) {
  EXPECT_EQ(true, true);
}

TEST(Q5_Student, HandlesDefaultConstructor) {
  float real =0;
  float ima=0;
  Complex s;
  EXPECT_FLOAT_EQ (s.real,real);
  EXPECT_FLOAT_EQ (s.ima,ima);
}

TEST(Q5_Student, HandlesParametrizedConstructor) {
  float real =5;
  float ima=7;
  Complex s(real,ima);
  EXPECT_FLOAT_EQ (s.real, real);
  EXPECT_FLOAT_EQ (s.ima, ima);
}

TEST(Q5_Student, HandlesCopyConstructor) {
  float real =5;
  float ima=7;
  Complex s(real,ima);
  Complex d=s;
  EXPECT_FLOAT_EQ (d.real, real);
  EXPECT_FLOAT_EQ (d.ima, ima);
}

TEST(Q5_Student, HandlesCopyOperator) {
  float real =5;
  float ima=7;
  Complex s(real,ima);
  Complex e;
  e=s;
  EXPECT_FLOAT_EQ (e.real, real);
  EXPECT_FLOAT_EQ (e.ima, ima);
}

TEST(Q5_Student, HandlesPostfixPlusAndMinusOperators) {
  float real =5;
  float ima=7;

  Complex e(real,ima);

  e.operator++();
  real++;
  EXPECT_FLOAT_EQ (e.real, real);
  EXPECT_FLOAT_EQ (e.ima, ima);

  e.operator--();
  --real;

  EXPECT_FLOAT_EQ (e.real, real);
  EXPECT_FLOAT_EQ (e.ima, ima);
}

TEST(Q5_Student, HandlesMulOperators) {
  float real =5;
  float ima=7;
  float mul =10.1;

  Complex e(real,ima);
  e.operator*(mul);
  
  EXPECT_FLOAT_EQ (e.real, (real*mul));
  EXPECT_FLOAT_EQ (e.ima, (ima*mul));
}

TEST(Q5_Student, HandlesPlusEqualOperators1) {
  float real =5;
  float ima=7;
  float add =10;

  Complex e(real,ima);
  e+=(add);
  
  EXPECT_FLOAT_EQ (e.real, (real+add));
  EXPECT_FLOAT_EQ (e.ima, ima);
}

TEST(Q5_Student, HandlesPlusEqualOperators2) {
  float real1 =1;
  float ima1  =0;
  Complex f(real1,ima1);
  float real =5;
  float ima=7;

  Complex e(real,ima);
  e+=(f);
  
  EXPECT_FLOAT_EQ (e.real, (real+real1));
  EXPECT_FLOAT_EQ (e.ima, (ima+ima1));
}

TEST(Q5_Student, HandlesLessThanOperators) {
  float real1 =1;
  float ima1  =0;
  Complex f(real1,ima1);
  float real =5;
  float ima=7;
  Complex e(real,ima);
  
  EXPECT_FLOAT_EQ (f>e, false);
  EXPECT_FLOAT_EQ (e>f, true);
}
