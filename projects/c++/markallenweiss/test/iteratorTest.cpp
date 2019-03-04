#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

//Test insert, erase

TEST(iteratorTest, insert){
  vector<int> seq = {1, 2, 3, 4, 5};
  auto itr = seq.begin( );
  itr = seq.insert(itr, 4);
  while(itr != seq.end( )){
    cout << *itr << " ";
    itr++;
  }
  
}
