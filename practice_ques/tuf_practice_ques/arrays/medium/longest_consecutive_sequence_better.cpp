#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& a) {
        sort(a.begin(), a.end());
        int n = a.size();

    vector<int>::iterator it; 
  
    // using unique() method to remove duplicates, there is alternative way also to maintain the lastsmaller element, instead of removing the duplicates
    it = unique(a.begin(), a.end()); 
  
    // resize the new vector 
    a.resize(distance(a.begin(), it));


        if(n==0){
            return 0;
        }
        int ans = 1;
        int i=1;
        int c=1;
        while(i<n){
            while(i<n && a[i] == a[i-1] + 1){
                c++;
                i++;
            }
            ans = max(ans, c);
            c=1;
            i++;
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