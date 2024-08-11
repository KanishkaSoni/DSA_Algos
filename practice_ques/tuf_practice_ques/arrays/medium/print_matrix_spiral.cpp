#include<bits/stdc++.h>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    vector<vector<bool> > vis(n, vector<bool>(m,false));
    vector<int> ans;
    int i=0;
    int j=0;
    int dir =0;
    while(i>=0 && j>=0 && i<n && j<m && vis[i][j] == false){
        //Here we are using extra space for vis array, that can be avoided, see striver video
        if(dir == 0){
            while(j<m && vis[i][j] == false){
                ans.push_back(a[i][j]);
                vis[i][j] = true;
                j++;
            }
            j--;
            i++;
            dir=1;

        }else if(dir == 1){
            while(i<n && vis[i][j] == false){
                ans.push_back(a[i][j]);
                vis[i][j] = true;
                i++;
            }
            i--;
            j--;
            dir=2;
        }else if(dir == 2){
            while(j>=0 && vis[i][j] == false){
                ans.push_back(a[i][j]);
                vis[i][j] = true;
                j--;
            }
            j++;
            i--;
            dir=3;
        }else{
            while(i>=0 && vis[i][j] == false){
                ans.push_back(a[i][j]);
                vis[i][j] = true;
                i--;
            }
            i++;
            j++;
            dir=0;
        }
    }
    return ans;
}


int main(){

    vector<vector<int> >  a = {{1,2,3},
                               {4,5,6},
                               {7,8,9}};

    
    vector<int> ans = spiralOrder(a);

	cout <<"\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout <<"\n";
	return 0;
}