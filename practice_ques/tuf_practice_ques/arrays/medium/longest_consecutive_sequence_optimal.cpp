#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& a) {
    int n = a.size();
    if(n==0){
        return 0;
    }
    unordered_set<int> s;
    int ans = 1;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    for(auto it : s){
        if(s.find(it-1) == s.end()){
            int ct = 1;
            int x = it;
            while(s.find(x+1) != s.end()){
                x++;
                ct++;
            }
            ans = max(ct, ans);
        }
    }
    return ans;
}


int main(){

    vector<int> a = {100,4,200,1,3,2};

    int ans = longestConsecutive(a);
    
    cout <<"\n";
    cout <<"Longest Consecutive Sequence length - " << ans;
    cout <<"\n";
}