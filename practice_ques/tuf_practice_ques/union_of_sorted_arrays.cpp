#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a, vector<int> &b) {
    int n = a.size();
    int m = b.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n && j<m){
        if(a[i] < b[j]){
            if(ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
            }
            i++;
        }else{
            if(ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(ans.size()==0 || ans.back() != a[i]){
                ans.push_back(a[i]);
        }
        i++;
    }
    while(j<m){
        if(ans.size()==0 || ans.back() != b[j]){
                ans.push_back(b[j]);
        }
        j++;
    }
    return ans;
}


int main(){

    vector<int> a = {2, 2, 3, 4, 5};
    vector<int> b = {1, 1, 2, 3, 4};

    vector<int> ans = findUnion(a, b);

	cout <<"\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout <<"\n";
	return 0;
}