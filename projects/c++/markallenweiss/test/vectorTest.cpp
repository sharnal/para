#include <gtest/gtest.h>
#include <vector>
#include <iostream>

using namespace std;

//Methods to test: size, empty, clear, push_back, pop_back, front, back, [] operator, at( ), capacity, reserve

TEST(vectorTest, size){
  vector<int> seq = {1, 2, 3, 4, 5};
  int expectedSize = 5;
  int actualSize = seq.size();
  EXPECT_EQ(expectedSize, actualSize);
}

TEST(vectorTest, empty){
  vector<int> seq;
  ASSERT_TRUE(seq.empty());
}

TEST(vectorTest, clear){
  vector<int> seq = {1, 2, 3, 4, 5};
  seq.clear();
  EXPECT_EQ(0, seq.size());
}

TEST(vectorTest, push_back){
  vector<int> seq1	= {1, 2, 3, 4, 5};
  vector<int> seq2	= {1, 2, 3, 4, 5, 6};
  seq1.push_back(6);
  ASSERT_TRUE(seq1 == seq2);
}

TEST(vectorTest, pop_back){
  vector<int> seq1	= {1, 2, 3, 4, 5};
  seq1.pop_back( );
  vector<int> seq2 = {1, 2, 3, 4};
  ASSERT_TRUE(seq1 == seq2);
}

TEST(vectorTest, front){
  vector<int> seq	= {1, 2, 3, 4, 5};
  EXPECT_EQ(1, seq.front( ));
}

TEST(vectorTest, back){
  vector<int> seq	= {1, 2, 3, 4, 5};
  EXPECT_EQ(5, seq.back( ));
}

TEST(vectorTest, square_operator){
  vector<int> seq = {1, 2, 3, 4, 5};
  EXPECT_EQ(3, seq[2]);
}

TEST(vectorTest, at){
  vector<int> seq = {1, 2, 3, 4, 5};
  EXPECT_EQ(3, seq.at(2));
}

TEST(vectorTest, capacity){
  vector<int> seq = {1, 2, 3, 4, 5};
  EXPECT_EQ(5, seq.capacity( ));
}

TEST(vectorTest, reserve){
  vector<int> seq = {1, 2, 3, 4, 5};
  seq.reserve(10);
  EXPECT_EQ(10, seq.capacity( ));
}

