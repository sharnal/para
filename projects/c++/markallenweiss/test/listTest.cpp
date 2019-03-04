#include <gtest/gtest.h>
#include <list>
#include <iterator>

using namespace std;

TEST(listTest, size){
  list<int> myList = {1, 2, 3, 4, 5};
  EXPECT_EQ(5, myList.size( ));
}

TEST(listTest, empty){
  list<int> seq;
  ASSERT_TRUE(seq.empty());
}

TEST(listTest, clear){
  list<int> seq = {1, 2, 3, 4, 5};
  seq.clear();
  EXPECT_EQ(0, seq.size());
}

TEST(listTest, push_back){
  list<int> seq1	= {1, 2, 3, 4, 5};
  list<int> seq2	= {1, 2, 3, 4, 5, 6};
  seq1.push_back(6);
  ASSERT_TRUE(seq1 == seq2);
}

TEST(listTest, pop_back){
  list<int> seq1	= {1, 2, 3, 4, 5};
  seq1.pop_back( );
  list<int> seq2 = {1, 2, 3, 4};
  ASSERT_TRUE(seq1 == seq2);
}

TEST(listTest, front){
  list<int> seq	= {1, 2, 3, 4, 5};
  EXPECT_EQ(1, seq.front( ));
}

TEST(listTest, back){
  list<int> seq	= {1, 2, 3, 4, 5};
  EXPECT_EQ(5, seq.back( ));
}

TEST(listTest, push_front){
  list<int> seq	= {1, 2, 3, 4, 5};
  seq.push_front(10);
  auto itr = seq.begin( );
  EXPECT_EQ(10, *itr);
}

TEST(listTest, pop_front){
  list<int> seq	= {1, 2, 3, 4, 5};
  seq.pop_front( );
  auto itr = seq.begin( );
  EXPECT_EQ(2, *itr);
}
