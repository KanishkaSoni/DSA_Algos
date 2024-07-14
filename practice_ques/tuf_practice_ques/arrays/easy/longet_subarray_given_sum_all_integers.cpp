#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(vector<int>& a, int k) {
	    long long s=0;
        int ans = 0;
        int n =a.size();
        map<long long, int> m;
        for (int i=0;i<n;i++){
            s+=a[i];
            if(s==k){
                ans = max(ans, i+1);
            }
            if(m.find(s-k) != m.end()){
                ans = max(ans, i-m[s-k]);
            }
            
            if(m.find(s) == m.end()){
                m[s] = i;;
            }
        }
        return ans;
}


int main(){
    vector<int> a = {10, 5, 2, 7, 1, 9};
    int k= 15;

    int ans = lenOfLongSubarr(a, k);
    
    cout << "\n";
    cout << ans;
    cout << "\n";
}