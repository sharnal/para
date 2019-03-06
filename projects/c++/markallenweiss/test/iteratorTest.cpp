#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

//Test insert, erase, begin, end

//Inserts at position prior to that given by iterator
TEST(iteratorTest, insert){
  vector<int> seq = {1, 2, 3, 4, 5};
  auto itr = seq.begin( );
  itr++;
  itr = seq.insert(itr, 4);
  vector<int> exp = {1, 4, 2, 3, 4, 5 };
  ASSERT_EQ(exp, seq);
}

//With itr = seq.end( ) and itr--, it is tricky! because seq.end( ) points to beyond the vector size!
TEST(iteratorTest, insert2){
  vector<int> seq = {1, 2, 3, 4, 5};
  auto itr = seq.end( );
  itr--;
  itr--;
  itr = seq.insert(itr, 6);
  vector<int> exp = {1, 2, 3, 6, 4, 5};
  ASSERT_EQ(exp, seq);
}

TEST(iteratorTest, erase){
  vector<int> seq = {1, 2, 3, 4, 5};
  auto itr = seq.begin( );
  itr++;
  itr = seq.erase(itr);
  vector<int> exp = {1, 3, 4, 5};
  ASSERT_EQ(exp, seq);
    
}

TEST(iteratorTest, eraserange){
  vector<int> seq = {1, 2, 3, 4, 5};
  auto itr = seq.begin( );
  itr++;
  itr++;
  itr = seq.erase(itr, seq.end( ));
  vector<int> exp = {1, 2};
  ASSERT_EQ(exp, seq);
}
