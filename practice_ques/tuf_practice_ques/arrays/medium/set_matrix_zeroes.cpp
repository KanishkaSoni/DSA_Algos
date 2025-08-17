#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    vector<int> r(n, 0);
    vector<int> c(m, 0);
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 0){
                r[i] = 1;
                c[j] = 1;
            }
        }
    }
    for(int i=0;i<n; i++){
        for(int j=0;j<m;j++){
            if(r[i] == 1 || c[j] == 1)
            a[i][j]=0;
        }
    }
}


int main(){

    vector<vector<int> >  a = {{0,1,2,0},
                               {3,4,5,2},
                               {1,3,1,5}};

    setZeroes(a);

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        for(int j=0;j<a[i].size(); j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout <<"\n";
	return 0;
}