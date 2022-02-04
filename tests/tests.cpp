#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

TEST(RectangleTests, CheckRectangle) {
	Rectangle r(4,4);
	EXPECT_EQ(r.get_width(),4);
	EXPECT_EQ(r.get_height(), 4);

}



TEST(AreaTests, Area) {
	Rectangle r(4,4);
	int areaRes = r.area();
	EXPECT_EQ(areaRes, 16);
}

TEST(PerimeterTests, Perimeter) {
	Rectangle r(4,4);
	int perimRes = r.perimeter();
	EXPECT_EQ(perimRes, 16);

}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}






