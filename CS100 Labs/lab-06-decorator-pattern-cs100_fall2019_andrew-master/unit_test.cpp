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
#include "Sort.hpp"
#include "BubbleSort.hpp"
#include "SelectionSort.hpp"
#include "List.hpp"
#include "Container.hpp"
#include "Vector.hpp"
#include "BubbleSort.hpp"
#include "Floor.hpp"
#include "Abs.hpp"
#include "Ceil.hpp"
#include "DecBase.hpp"
#include "Truncate.hpp"
#include "Paren.hpp"


TEST(Floortest, expect2) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* two=new Op(2);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* divfunc=new Div(five,two);
    DecBase* floorfunc=new Floor(divfunc);
    EXPECT_EQ(2,floorfunc->evaluate() );
}



TEST(Ceiltest, expect3) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* two=new Op(2);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* divfunc=new Div(five,two);
    DecBase* ceilfunc=new Ceil(divfunc);
    EXPECT_EQ(3,ceilfunc->evaluate() );
}


TEST(Abstest, expectpositive2) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Subtraction=new Sub(three,five);
    DecBase* Absfunc=new Abs(Subtraction);
    EXPECT_EQ(2,Absfunc->evaluate() );
}


TEST(Parentest, expectparen) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Addition=new Add(five,three);
    DecBase* Parenfunc=new Paren(Addition);
    EXPECT_EQ("(5.000000+3.000000)",Parenfunc->stringify() );
}

TEST(Trunctest, expect8) {
    Base* three=new Op(3);
    Base* twopointfive=new Op(2.5);
    Base* four=new Op(4);
    Base* five=new Op(5);
    Base* ninety=new Op(90);
    Base* Addition=new Add(five,three);
    DecBase* Truncfunc=new Truncate(Addition);
    EXPECT_EQ("8.000000",Truncfunc->stringify() );
}






/*
TEST(SortTestSet, BubbleTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Base* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Base* TreeC = new Sub(ten, six);

    Container* container = new Vector();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new BubbleSort); 
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(SortTestSet, SelectionSortTest) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Base* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Base* TreeC = new Sub(ten, six);

    Container* container = new Vector();
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->set_sort_function(new SelectionSort);
    container->sort();

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 4);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 28);
}

TEST(Swap, Swaptests) {
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* TreeA = new Mult(seven, four);

    Base* three = new Op(3);
    Base* two = new Op(2);
    Base* TreeB = new Add(three, two);

    Base* ten = new Op(10);
    Base* six = new Op(6);
    Base* TreeC = new Sub(ten, six);

    Container* container = new Vector();
    Container* Listcontainer=new List();
    Listcontainer->add_element(TreeA);
    Listcontainer->add_element(TreeB);
    Listcontainer->add_element(TreeC);
    container->add_element(TreeA);
    container->add_element(TreeB);
    container->add_element(TreeC);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 28);
    EXPECT_EQ(container->at(1)->evaluate(), 5);
    EXPECT_EQ(container->at(2)->evaluate(), 4);

    container->swap(0,1);

    ASSERT_EQ(container->size(), 3);
    EXPECT_EQ(container->at(0)->evaluate(), 5);
    EXPECT_EQ(container->at(1)->evaluate(), 28);
    EXPECT_EQ(container->at(2)->evaluate(), 4);




    ASSERT_EQ(Listcontainer->size(), 3);
    EXPECT_EQ(Listcontainer->at(0)->evaluate(), 28);
    EXPECT_EQ(Listcontainer->at(1)->evaluate(), 5);
    EXPECT_EQ(Listcontainer->at(2)->evaluate(), 4);

    Listcontainer->swap(0,1);

    ASSERT_EQ(Listcontainer->size(), 3);
    EXPECT_EQ(Listcontainer->at(0)->evaluate(), 5);
    EXPECT_EQ(Listcontainer->at(1)->evaluate(), 28);
    EXPECT_EQ(Listcontainer->at(2)->evaluate(), 4);

}
*/






/*
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
*/




int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
