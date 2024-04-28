#include<bits/stdc++.h>

using namespace std;



void bfs(vector<vector<int> >& a, int s, vector<bool>& v){

    v[s] = true;
    queue<int> q;
    q.push(s);

    while(!q.empty()){
        int curr = q.front();
        q.pop();
        cout << curr << " ";
        for (auto i: a[curr]){
            if(!v[i]){
                v[i] = true;
                q.push(i);
            }
        }
    } 

}

void addEdge(vector<vector<int> > &a, int s, int d){
    a[s].push_back(d);
}


int main(){
    int vertices = 5;
    vector<vector<int> > a(vertices);
    addEdge(a, 0, 1);
    addEdge(a, 0, 2);
    addEdge(a, 1, 2);
    addEdge(a, 1, 3);
    addEdge(a, 2, 4);
    addEdge(a, 3, 4);

    vector<bool> v(vertices, false);
    bfs(a, 0, v);
}