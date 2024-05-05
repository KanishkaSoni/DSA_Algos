#include<bits/stdc++.h>

using namespace std;



void dfs(vector<vector<int> >& a, int s, vector<bool>& v){

    v[s] = true;
    cout<<s<< " ";

    for (auto i: a[s]){
        if(!v[i]){
            dfs(a, i, v);
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
    addEdge(a, 2, 0);
    addEdge(a, 2, 3);
    addEdge(a, 3, 3);

    vector<bool> v(vertices, false);
    dfs(a, 2, v);
}