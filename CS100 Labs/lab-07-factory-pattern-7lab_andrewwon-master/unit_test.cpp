#include "gtest/gtest.h"

#include <iostream>
#include <string>
#include "base.hpp"
#include "Add.hpp"
#include "op.hpp"
#include "Sub.hpp"
#include "Pow.hpp"
#include "Div.hpp"
#include "Mult.hpp"
#include "factory.hpp"
TEST(ExpressionTest, add_sub_mult) {
    char* input[]={"","8","+","9","-","3","*","2",NULL};
    factory* ExprTreeFact=new factory();
    Base* newexpression= ExprTreeFact->Parse(input,1); 
    EXPECT_EQ(28,newexpression->evaluate() );
    EXPECT_EQ("8.000000+9.000000-3.000000*2.000000",newexpression->stringify());

}
TEST(ExpressionTest, div_pow) {
    char* input[]={"","8","/","4","*","*","2",NULL};
    factory* ExprTreeFact=new factory();
    Base* newexpression= ExprTreeFact->Parse(input,1);
    EXPECT_EQ(4,newexpression->evaluate() );
    EXPECT_EQ("8.000000/4.000000**2.000000",newexpression->stringify());

}

TEST(ExpressionTest, error) {
    char* input[]={"","8","/","/","*","*","2",NULL};
    factory* ExprTreeFact=new factory();
    Base* newexpression= ExprTreeFact->Parse(input,1);
    EXPECT_EQ(NULL,newexpression );
    //EXPECT_EQ("8.000000/4.000000**2.000000",newexpression->stringify());
}

TEST(ExpressionTest, all) {
    char* input[]={"","8","/","2","-","2","*","3","*","*","2","+","5",NULL};
    factory* ExprTreeFact=new factory();
    Base* newexpression= ExprTreeFact->Parse(input,1);
    EXPECT_EQ(41,newexpression->evaluate() );
    EXPECT_EQ("8.000000/2.000000-2.000000*3.000000**2.000000+5.000000",newexpression->stringify());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
