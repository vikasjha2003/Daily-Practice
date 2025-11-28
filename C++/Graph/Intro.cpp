#include<iostream>
#include<vector>
using namespace std;
class graph {
    int v;
    vector<vector<int>> gr;

public:

    graph(int v) {
        this -> v = v;
        gr = vector<vector<int>> (v);
    }

    void addEdge (int u , int v) {
        gr[v].push_back(u);
        gr[u].push_back(v);
    }

    void printgraph() {
        for(int i = 0; i<v; i++) {
            cout<<i<<" : ";
            for(int j = 0; j<gr[i].size(); j++) {
                cout<<gr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};
int main () {
    graph g = graph(5);
    g.addEdge(1,2);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,3);
    g.addEdge(2,4);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.printgraph();
}