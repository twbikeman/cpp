#include <numeric>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

template<typename Iter_T>
double vectorNorm(Iter_T first, Iter_T last) {
  return sqrt(inner_product(first, last, first, 0.0));
}


int main() {
  int v[] = {3, 4};
  cout << "The length of the vecotr (3, 4) is ";
  cout << vectorNorm(v, v + 2) << endl;
  return 0;
}
