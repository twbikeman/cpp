#include <string>
#include <iostream>

using namespace std;

class Node {
private:
  string value;
  Node *next;
public:
  Node(string v = ""): next(nullptr), value(v) {}
  void setValue(string s) { value = s;}
  string getValue() {return value;}
  Node * getNext() {return next;}
  void setNext(Node *n){next = n;}
};


class LinkedList {
private:
  Node *head;
public:
  LinkedList(): head(nullptr) {}
  void insert(string v) {
    Node *nd = new Node(v);
    nd->setNext(this->head);
    this->head = nd;
  }
  void print() {
    Node *pt = head;
    while(pt != nullptr) {
      cout << pt->getValue() << endl;
      pt = pt->getNext();
    }
  }
  
  



};


int main() {

  Node myNode;
  LinkedList mylist;
  mylist.insert("test1");
  mylist.insert("test2");
  mylist.insert("test3");
  mylist.print();
  return 0;
}
