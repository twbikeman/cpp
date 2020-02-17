#include <fstream>
#include <iostream>
#include <string>

struct Test {
  int i;
  int j;
};



int main() {
  std::fstream fs("test.txt", std::ios::in | std::ios::out | std::ios::binary);
  std::string s;
  //  while (getline(fs, s)) std::cout << s << std::endl;
  Test t;
  Test y;
  t.i = 10;
  t.j = 20;
  fs.write((char *)&t, sizeof(Test));
  fs.seekg(0, std::ios::beg);
  fs.read((char *)&y, sizeof(Test));
  std::cout << y.j << std::endl;
  fs.close();
  return 0;
}
