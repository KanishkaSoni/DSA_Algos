#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &a) {
    int n = a.size();
    vector<int> ans;
    int mx = a[n-1];
    ans.push_back(a[n-1]);
    for(int i=n-2;i>=0;i--){
        if(a[i] >= mx){
            ans.push_back(a[i]);
            mx = a[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}


int main(){

    vector<int> a = {16,17,4,3,5,2};

    vector<int> ans = leaders(a);

	cout <<"\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout <<"\n";
	return 0;
}