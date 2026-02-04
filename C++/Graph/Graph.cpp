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

    bool isCycle(int n, vector<vector<int>>& edges) { // cycle in graph BFS
        vector<vector<int>> adj (n);
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> visited (n,false);
        for(int start = 0; start < n; start++) {
            if(!visited[start]) {
                queue<pair<int,int>> q;
                visited[start] = true;
                q.push({start,-1});
                while(!q.empty()) {
                    auto node = q.front();
                    q.pop();
                    for(int i : adj[node.first]) {
                        if(i == node.second) continue;
                        if(visited[i] == true) return true;
                        else {
                            visited[i] = true;
                            q.push({i,node.first});
                        }
                    }
                }
            }
        }
        return false;
    }

    // DFS Solution for cycle in graph

    bool DFS (vector<vector<int>>& edges , vector<bool> &visited , int prev, int node) {
        for(int i = 0; i<edges[node].size(); i++) {
            if(edges[node][i] == prev) continue;
            if(visited[edges[node][i]] == true) return true;
            else {
                visited[edges[node][i]] = true;
                if(DFS(edges, visited , node, edges[node][i])) return true;
            }
            
        }
        return false;
    }
    
    bool isCycle(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj (n);
        for(auto edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> visited (n,false);
        for(int start = 0; start < n; start++) {
            if(!visited[start]) {
                visited[start] = true;
                if(DFS(adj , visited , -1 ,start)) return true;
            }
        }
        return false;
    }

int main () {
    vector<vector<int>> input = {
        {1},{0,2,3},{1,4},{1},{2,5},{4}
    };
    graph* gr = new graph(input);
    gr->BFS();
    gr->DFS();
}