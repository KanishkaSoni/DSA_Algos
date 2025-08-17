#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& a) {
	    int ans = 0;
        int n = a.size();
        for (int i=0; i<n; i++){
            ans = ans ^ a[i];
        }
        return ans;
}


int main(){
    vector<int> a = {4,1,2,1,2};

    int ans = singleNumber(a);
    
    cout << "\n";
    cout << ans;
    cout << "\n";
}