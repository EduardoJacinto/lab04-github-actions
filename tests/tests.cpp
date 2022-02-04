#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(RectangleTests, CheckRectangle) {
	Rectangle r(4,4);
	EXPECT_EQ(r.get_width(),4);
	EXPECT_EQ(r.get_height(), 4);

}

TEST(RectangleTests, CheckRectangle2) {
	Rectangle r(10,10);
	EXPECT_EQ(r.get_width(), 10);
	EXPECT_EQ(r.get_height(), 10);

}

TEST(RectangleTests, CheckRectangle3) {
	Rectangle r(100, 100);
	EXPECT_EQ(r.get_width(), 100);
	EXPECT_EQ(r.get_height(), 100);
}

TEST(AreaTests, CheckArea) {
	Rectangle r(4,4);
	int areaRes = r.area();
	EXPECT_EQ(areaRes, 16);
}

TEST(AreaTests, CheckArea2) {
	Rectangle r(10,10);
	int areaRes = r.area();
	EXPECT_EQ(areaRes, 100);
}

TEST(AreaTests, CheckArea3) {
	Rectangle r(100,100);
	int areaRes = r.area();
	EXPECT_EQ(areaRes, 10000);
}

TEST(PerimeterTests, Perimeter) {
	Rectangle r(4,4);
	int perimRes = r.perimeter();
	EXPECT_EQ(perimRes, 16);

}

TEST(PerimeterTests, Perimeter2) {
	Rectangle r(10,10);
	int perimRes = r.perimeter();
	EXPECT_EQ(perimRes, 40);

}

TEST(PerimeterTests, Perimeter3) {
	Rectangle r(100,100);
	int perimRes = r.peimeter();
	EXPECT_EQ(perimRes, 400);
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}






