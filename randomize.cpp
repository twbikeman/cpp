#include <cstdio>
#include <cstdint>


void randomize(uint32_t&);


int main() {
  uint32_t number{0x4c4347};
  randomize(number);
  printf("%d", number);
  return 0;
}


void randomize(uint32_t& x)  {
  x = 0x3FFFFFFF & (0x41C64E6D * x + 12345  % 0x80000000);

}
