#include <iostream>
#include <string>


using namespace std;

int main() {

  string s{"AAAAA:BBBBB:YYYY:KKK:JOJO"};
  size_t pos;
  while ((pos = s.find(":")) != string::npos) {
    cout << s.substr(0, pos) << endl;
    s.erase(0, pos + 1);
  }
  cout << s << endl;
  return 0;

}
