#include <string>
#include <cctype>
#include <iostream>

using namespace std;

void toUpper(basic_string<char>& s) {
  for (basic_string<char>::iterator p = s.begin(); p != s.end(); ++p) {
    *p = toupper(*p);
  }

}


int main() {

  string s = "shazam";
  toUpper(s);
  cout << s << endl;
  return 0;
}
