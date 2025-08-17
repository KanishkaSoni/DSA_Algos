#include<bits/stdc++.h>
using namespace std;

int pairWithMaxSum(vector<int>& a) {
        int n = a.size();
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            ans = max(ans, a[i] + a[i+1]);
        }
        return ans;

	}


int main(){

    vector<int> a = {4, 3, 1, 5, 6};

    int ans = pairWithMaxSum(a);
    
    cout <<"\n";
    cout <<"Max Score - " << ans;
    cout <<"\n";
}