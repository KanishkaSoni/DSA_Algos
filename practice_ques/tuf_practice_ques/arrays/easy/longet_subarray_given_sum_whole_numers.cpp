#include<bits/stdc++.h>
using namespace std;

int lenOfLongSubarr(vector<int>& a, int k) {
	    int n = a.size();
        int l = 0;
        int r = 0;
        int sum = a[0];
        int ans = 0;
        while(r<n){
            while( l<=r && sum > k){
                sum = sum-a[l];
                l++;
            }
            if(sum == k){
                ans = max(ans, r-l+1);
            }
            r++;
            if(r<n) {sum += a[r];}
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