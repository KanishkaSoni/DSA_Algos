#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

vector<int> subarraySum(vector<int>a, int n, long long s)
    {
        // Your code here
        vector<int> ans;
        int fi=0;
        int se=0;
        long long sum = a[fi];
        
        while(fi != n && se != n){
            sleep(2);
            if(sum < s){
                cout<<" less "<<sum<<", se = "<<se<<endl;
                se += 1;
                if(se<n){
                    sum += a[se];
                }
            }else if(sum > s){
                cout<<" more "<<sum<<endl;
                if(fi<se){
                    sum -= a[fi];
                    fi += 1;
                }else{
                    fi += 1;
                    se += 1;
                    if(fi < n){
                     sum = a[fi];   
                    }
                }
            }else{
                cout<<" equal "<<sum<<endl;
                ans.push_back(fi+1);
                ans.push_back(se+1);
                return ans;
            }
        }
        
        ans.push_back(-1);
        return ans;
    }




int main(){

    vector<int> a = {1,2,3,7,5};
    int s = 24;

    vector<int> ans = subarraySum(a, 5, s);

    // cout << ans;

    cout << endl;
    for (int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;

}