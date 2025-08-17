#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& a) {
        int n = a.size();
        int b = a[0];
        int ans = 0;
        for(int i=1; i<n;i++){

            ans = max(ans, a[i] - b);
            b = min(a[i], b);
        }
        return ans;
	}


int main(){

    vector<int> a = {7,1,5,3,6,4};

    int ans = maxProfit(a);
    
    cout <<"\n";
    cout <<"Max Profit - " << ans;
    cout <<"\n";
}