 #include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(constructorTest, WH1) {
        Rectangle r(4,4);

        EXPECT_EQ(4, r.get_width());
        EXPECT_EQ(4, r.get_height());
}
TEST(constructorTest, WH2) {
        Rectangle r(10,10);

        EXPECT_EQ(10, r.get_width());
        EXPECT_EQ(10, r.get_height());
}

TEST(constructorTest, WH3) {
        Rectangle r(100,100);

        EXPECT_EQ(100, r.get_width());
        EXPECT_EQ(100, r.get_height());
}
TEST(AreaTest, Area1) {
        Rectangle r(4,4);
        int res = r.area();

        EXPECT_EQ(res, 16);
}

TEST(AreaTest, Area2) {
        Rectangle r(10,10);
        int res = r.area();

        EXPECT_EQ(res, 100);
}

TEST(AreaTest, Area3) {
        Rectangle r(100,100);
        int res = r.area();

        EXPECT_EQ(res, 10000);
}

TEST(PerimeterTest, Peri1) {
        Rectangle r(4,4);
        int res = r.perimeter();

        EXPECT_EQ(res, 16);
}
TEST(PerimeterTest, Peri2) {
        Rectangle r(10,10);
        int res = r.perimeter();

        EXPECT_EQ(res, 40);
}
TEST(PerimeterTest, Peri3) {
        Rectangle r(100,100);
        int res = r.perimeter();

        EXPECT_EQ(res, 400);
}

int main(int argc, char **argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
