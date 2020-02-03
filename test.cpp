#include <iostream>



#define MACRO(x,y) {				\
  cout << (x) * (y) <<  endl;

#define END_MACRO }

using namespace std;

int main() {

  MACRO(5,6)

    cout << "test" << endl;
  END_MACRO

  return 0;
}
