#include<bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& a, int k) {
    int s=0;
    map<long, int> m;
    int n = a.size();
    int ans = 0;
    m[0] = 1;
    for(int i=0;i<n;i++){
        s += a[i];
        ans += m[s-k];
        m[s]++;
    }
    return ans;

	}


int main(){

    vector<int> a = {1,2,3};
    int k = 3;

    int ans = subarraySum(a, k);
    
    cout <<"\n";
    cout <<"Count of subarrays with given sum - " << ans;
    cout <<"\n";
}