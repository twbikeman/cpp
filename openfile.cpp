#include <iostream>
#include <fstream>
#include <string>

int main() {

  std::ifstream fs("perm.cpp", std::ios::in);
  std::string str;
  while (getline(fs, str)) {
    std::cout << str << std::endl;
  }
  
  return 0;
}

