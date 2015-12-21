#include <iostream>
#include <gtest/gtest.h>

using namespace std;

int sum(int an, int bn) {
    return (an+bn);
}

TEST(ProgTest, Sum) {
    //EXPECT_EQ(1,sum(5,1));
    EXPECT_EQ(6,sum(5,1));
}

int main(int argc, char **argv) {
//cout << “Running from gtest” << endl;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}