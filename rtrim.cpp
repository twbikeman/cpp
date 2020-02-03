#include <iostream>
#include <string>

using namespace std;

int main() {
  char c = 'X';
  string s = "AAAAAXXXXXXX";
  if (s.empty())
    return 0;
  string::iterator i;
  for(i = s.end(); i != s.begin() && *--i == c;);
  if(*i != c)
    i++;
  s.erase(i, s.end());
  cout << s << endl;
  
  
    

  return 0;
}
