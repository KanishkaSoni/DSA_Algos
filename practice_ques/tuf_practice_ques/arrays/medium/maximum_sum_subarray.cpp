#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& a) {
    // Kadane's Algorithm Algorithm
        int n = a.size();
        int ans = INT_MIN;
        int s = 0;
        for(int i=0;i<n;i++){
            s += a[i];
            if(s > ans){
                ans = s;
            }
            if(s<0){
                s=0;
            }
        }
        return ans;

	}


int main(){

    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};

    int ans = maxSubArray(a);
    
    cout <<"\n";
    cout <<"Max Subarray Sum - " << ans;
    cout <<"\n";
}