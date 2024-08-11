#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& a) {
    // Moore's Voting Algorithm
        int n = a.size();
        int c=0;
        int ans;
        for(int i=0;i<n;i++){
            if(c==0){
                c++;
                ans = a[i];
            }
            else{
                if(a[i] == ans){
                    c++;
                }
                else{
                    c--;
                }
            }
        }
        return ans;

	}


int main(){

    vector<int> a = {2,2,1,1,1,2,2};

    int ans = majorityElement(a);
    
    cout <<"\n";
    cout <<"Majority Element - " << ans;
    cout <<"\n";
}