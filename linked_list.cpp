#include <iostream>
#include <list>



using namespace std;




void displayAdjList(list<int> adj_list[], int v) {
  for (int i = 0; i <  v; i++) {

    cout << i << "---> "; 
    list<int>::iterator it;
    for(it = adj_list[i].begin(); it != adj_list[i].end(); it++) {
      cout << *it << " ";
    }
    cout << endl;
  }
}


void addEdge(list<int> adj_list[], int u, int v) {
  adj_list[u].push_back(v);
  adj_list[v].push_back(u);
}


int main(int argc, char * argv[]) {
  int v = 6;
  list<int> adjList[v];
  addEdge(adjList, 1, 2);
  addEdge(adjList, 1, 5);
  addEdge(adjList, 1, 4);
  addEdge(adjList, 5, 2);
  addEdge(adjList, 5, 4);
  addEdge(adjList, 2, 3);
  addEdge(adjList, 5, 3);
  addEdge(adjList, 3, 0);
  addEdge(adjList, 0, 4);
  displayAdjList(adjList, 6);
  return 0;
}
