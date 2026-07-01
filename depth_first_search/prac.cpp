#include<iostream>
#include<vector>
using namespace std; 

void dfsrec(vector<vector<int>>&adj, vector<bool>&visited, int digit, vector<int>res){
    visited[digit] = true;
    cout<<"visited:"<<digit;
    res.push_back(digit);
    for(int i : adj[digit]){
        if(visited[i] == false){
            dfsrec(adj, visited, digit, res);
        }
    }
}

vector<int> dfs(vector<vector<int>>&adj){
    vector<bool>visited (adj.size(),false);
    vector<int>res;
    dfsrec(adj , visited , 0 , res); 
    return res;
}

void addEdge(vector<vector<int>>&adj,int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}   

int main(){
    vector<vector<int>>adj;
    addEdge(adj,1,2);
    addEdge(adj, 1, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    vector<int> res = dfs(adj); 
    return 0;
}