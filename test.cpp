
// compiles with g++ -o test test.cpp -std=c++14 -Wall

#include "include/expressive/expressive.h"
#include "assert.h"

int main(){

  using math::expressive::use;

  auto f = [](int a, int b){ return a + b; };

  math::expressive::literal_factory<int,int> lit;

  auto g  = lit(5);

  auto h  = use(f) + g ;

  assert( h(2,3) == 10);

return 0;

}
