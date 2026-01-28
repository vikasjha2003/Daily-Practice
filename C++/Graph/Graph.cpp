#include<bits/stdc++.h>
using namespace std;

class graph {
public:
    int vertex; // number of vertex in graph
    vector<vector<int>> edges; // using dybanmic vector to store edges
     
    graph(int val) {
        vertex = val;
        edges = vector<vector<int>>(val);
    }
    graph(vector<vector<int>> &v) {
        edges = v;
        vertex = v.size();
    }

    void addEdge (int u, int v) {
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    void BFS () {
        cout<<"BFS for the given graph is: \n";
        vector<bool> visited(vertex,false);
        for(int start = 0; start < vertex; start++) { // to ensure BFS works for disconnected graphs
            if(!visited[start]) {
                queue<int> q;
                q.push(start);
                visited[start] = true;
                while(!q.empty()) {
                    int node = q.front();
                    q.pop();
                    cout<<node<<" ";
                    for(int next : edges[node]) {
                        if(!visited[next]) {
                            q.push(next);
                            visited[next] = true;
                        }
                    }
                }
            }
        }
        cout<<endl;
    }

    private:
        void DFS_helper (int node , vector<bool> &visited) {
            cout<<node<<" ";
            for (int next : edges[node]) {
                if(!visited[next]) {
                    visited[next] = true;
                    DFS_helper(next,visited);
                }
            }
        }
    public: 
        void DFS () {
            cout<<"DFS for the given graph is: \n";
            vector<bool> visited(vertex,false);
            for(int start = 0; start < vertex; start++) {
                if(!visited[start]) {
                    visited[start] = true;
                    DFS_helper(start,visited);
                }
            }
            cout<<endl;
        }

};

int main () {
    vector<vector<int>> input = {
        {1},{0,2,3},{1,4},{1},{2,5},{4}
    };
    graph* gr = new graph(input);
    gr->BFS();
    gr->DFS();
}