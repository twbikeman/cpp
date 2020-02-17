#include <fstream>
#include <string>
#include <iostream>

struct Test {
  int i = 10;
  float j = 3.3;
};




int main() {
  struct Test test;
  test.i = 20;
  struct Test tt;
  std::fstream fs("mytest.txt", std::ios::in | std::ios::out  | std::ios::binary);
  fs.write((char *)&test, sizeof(struct Test));
  fs.seekg(std::ios_base::beg);
  fs.read((char *)&tt, sizeof(struct Test));
  std::cout << tt.i << ' ' << tt.j<< std::endl;
  fs.close();
  return 0;
}
