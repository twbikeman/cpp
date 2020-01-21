
#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp = fopen("test.txt", "r");
  int a, b;
  if (!fp) return 1;
  while (fscanf(fp,"(%d:%d)", &a, &b) == 2) {
    fprintf(stdout, "%d %d\n", a, b);
  }
  return 0;
}
