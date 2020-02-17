#include <iostream>

void perm(int r, int l, char *array) {
  if (r + 1 == l) std::cout << array << std::endl;
  for (int i = r ; i < l; i++) {
    char temp = array[r];
    array[r] = array[i];
    array[i] = temp;
    perm(r+1, l, array);
    array[i] = array[r];
    array[r] = temp;
  }
}


int main() {
  char test[] = "123";
  perm(0,3, test);
  return 0;
}
