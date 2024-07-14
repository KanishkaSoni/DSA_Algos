#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& a) {
	    int i=0;
        int ans=0;
        int n = a.size();
        while(i<n){
            int c=0;
            while(i<n && a[i]==1){
                i++;
                c++;
            }
            ans = max(ans, c);
            i++;
        }
        return ans;
}


int main(){
    vector<int> a = {1,0,1,1,0,1};

    int maxOnes = findMaxConsecutiveOnes(a);
    
    cout <<"\n";
    cout <<maxOnes;
    cout <<"\n";
}