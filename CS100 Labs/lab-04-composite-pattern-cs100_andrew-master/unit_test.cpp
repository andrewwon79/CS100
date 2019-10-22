#include "gtest/gtest.h"

#include <iostream>
#include <string>
#include "base.hpp"
#include "Add.hpp"
#include "op.hpp"
#include "Sub.hpp"
#include "Rand.hpp"
#include "Pow.hpp"
#include "Div.hpp"
#include "Mult.hpp"

TEST(Addtest, expectEight) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Addition=new Add(five,three); 
    EXPECT_EQ(8,Addition->evaluate() );
    EXPECT_EQ("5.000000+3.000000",Addition->stringify());

}

TEST(Subtest, expect_Neg_EightyFive) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Subtract=new Sub(five,ninety);
    EXPECT_EQ(-85,Subtract->evaluate() );
    EXPECT_EQ("5.000000-90.000000",Subtract->stringify());

}

TEST(MultTest, expectTwenty) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Multiply=new Mult(five,four);
    EXPECT_EQ(20,Multiply->evaluate() );
    EXPECT_EQ("5.000000*4.000000",Multiply->stringify());
}


TEST(Divtest, expectTwo) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Division=new Div(five,twopointfive);
    EXPECT_EQ(2,Division->evaluate() );
    EXPECT_EQ("5.000000/2.500000",Division->stringify());
}

TEST(Decimaltest, expect_SevenpointFive) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Multiply=new Mult(three,twopointfive);
    EXPECT_EQ(7.5,Multiply->evaluate() );
    EXPECT_EQ("3.000000*2.500000",Multiply->stringify());
}

TEST(Powtest, expect_TwoSixteen) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* six=new Op(6);
    Base* ninety=new Op(90);
    Base* Power=new Pow(six,three);
    EXPECT_EQ(216,Power->evaluate() );
    EXPECT_EQ("6.000000**3.000000",Power->stringify());
}

TEST(Strings_test, expect_LargeString) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* six=new Op(6);
    Base* ninety=new Op(90);
    Base* Power=new Pow(six,three);
    Base* Subtract=new Sub(Power,ninety);
    Base* Addition=new Add(Subtract,five);
    EXPECT_EQ("6.000000**3.000000-90.000000+5.000000",Addition->stringify());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
