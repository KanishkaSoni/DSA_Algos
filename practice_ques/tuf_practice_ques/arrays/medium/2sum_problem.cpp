#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& a, int t) {
	    vector<int> ans;
        int n =a.size();
        map<int, int> m;
        for(int i=0;i<n;i++){
            if(m.find(t-a[i]) != m.end()){
                ans.push_back(i);
                ans.push_back(m[t-a[i]]);
                return ans;
            }
            m[a[i]] = i;
        }
        return ans;
	}


int main(){

    vector<int> a = {2,7,11,15};
    int t = 9;

    vector<int> ans = twoSum(a, t);
    
    cout <<"\n";
    cout <<"["<<ans[0]<<", "<<ans[1]<<"]";
    cout <<"\n";
}