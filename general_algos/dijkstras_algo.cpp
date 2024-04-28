#include<bits/stdc++.h>
using namespace std;


int minDistance(vector<int> &dist, vector<bool> &spt){
    int n = dist.size();
    int min_index = -1;
    int min_dist = INT_MAX;
    
    
    for(int i=0; i<n; i++){
        if(!spt[i] && dist[i] < min_dist){
            min_dist = dist[i];
            min_index = i;
        }
    }
    return min_index;
}



vector <int> dijkstra(int n, vector<vector<int>> adj[], int S)
{
    // Code here
    vector<int> dist(n, INT_MAX);
    vector<bool> spt(n, false);
    dist[S] = 0;

    for (int i=0; i<n-1; i++){
        int min_index = minDistance(dist, spt);
    
        spt[min_index] = true;
        
        for ( auto pair : adj[min_index]){
            cout<<"Pair "<< pair[0] << " " <<pair[1];
            // for(int i=0;i<n;i++){
            //     cout << endl;
            //     cout<<spt[i]<<"";
            //     cout<<endl;
            // }
            // cout<<!spt[pair[0]] <<" " << dist[pair[0]] <<" "<< dist[min_index] <<" "<< pair[1];
            if(!spt[pair[0]] && dist[min_index] != INT_MAX && dist[min_index] + pair[1] < dist[pair[0]]){
                cout << "node "<< pair[0]<< " relaxed\n";
                dist[pair[0]] = dist[min_index] + pair[1];
            }
        }

        // for ( int i=0; i < adj[min_index].size(); i++){
        //     if(!spt[adj[min_index][i][0]] && dist[adj[min_index][i][0]] < dist[min_index] + adj[min_index][i][1]){
        //         dist[adj[min_index][i][0]] = dist[min_index] + adj[min_index][i][1];
        //     }   
        // }
    }

    cout << endl;
    for(int i=0;i<n;i++){
        cout<<dist[i]<<" ";
    }
    cout <<endl;
    
    return dist;
    
}



int main(){

    vector<vector<int> > adj[2];
    int n = 2;
    adj[0] = {{1,9}};
    adj[1] = {{0,9}};

    int s=0;

    dijkstra(n, adj, s);


}
