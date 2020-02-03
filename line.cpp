#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {
  vector<string> v;
  string s;
  ifstream ifs("list.txt", ifstream::in);
  while(getline(ifs, s)) {
    v.push_back(s);
  }

  for(auto it = v.begin(); it != v.end(); it++)
    cout << *it << "ok!" << endl;

  return 0;
}
