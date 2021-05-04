#ifndef __TEST_CPP__
#define __TEST_CPP__

#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(Constructor, defaultConstructor) {
	Rectangle* test = new Rectangle();
	EXPECT_EQ(test->get_width() + test->get_height(), 0);
}

TEST(Constructor, ParamaterizedConstructor) {
	Rectangle* test = new Rectangle(3, 5);
	EXPECT_EQ(test->get_width() + test->get_height(), 8);
}

TEST(Constructor, NegInput) {
	Rectangle* test = new Rectangle(-5, -8);
	EXPECT_EQ(test->get_width() + test->get_height(), 13);
}

TEST(Area, SimpleArea) {
	Rectangle* test = new Rectangle(3, 4);
	EXPECT_EQ(test->area(), 12);
}

TEST(Area, ZeroArea) {
	Rectangle* test = new Rectangle(0, 1);
	EXPECT_EQ(test->area(), 0);
}

TEST(Area, OneNegInputArea) {
	Rectangle* test = new Rectangle(-3, 4);
	EXPECT_EQ(test->area(), 12);
}

TEST(Area, TwoNegInputArea) {
	Rectangle* test = new Rectangle(-2, -6);
	EXPECT_EQ(test->area(), 12);
}

TEST(Perimeter, SimplePerimeter) {
	Rectangle* test = new Rectangle(3, 4);
	EXPECT_EQ(test->perimeter(), 14);
}

TEST(Perimeter, ZeroPerimeter) {
	Rectangle* test = new Rectangle(0, 0);
	EXPECT_EQ(test->perimeter(), 0);
}

TEST(Perimeter, OneNegInputPerimeter) {
	Rectangle* test = new Rectangle(-3, 4);
	EXPECT_EQ(test->perimeter(), 14);
}

TEST(Perimeter, TwoNegInputPerimeter) {
	Rectangle* test = new Rectangle(-2, -6);
	EXPECT_EQ(test->perimeter(), 16);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#endif
