#include <fstream>
#include <iostream>


int main() {

  std::ifstream is("test.txt", std::ifstream::binary);
  is.seekg(0, is.end);
  int len = is.tellg();
  is.seekg(0, is.beg);
  char *buffer = new char[len];

  is.read(buffer, len);
  is.close();
  std::cout.write(buffer, len);
  delete[] buffer;
  
  return 0;
}
