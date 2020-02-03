#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "BBBAAA";
  char t = 'B';
  string::iterator i;
  for (i = s.begin(); *i == t && i != s.end(); i++);
  s.erase(s.begin(), i);
  cout << s << endl;
    
  
  
  
  return 0;
}
