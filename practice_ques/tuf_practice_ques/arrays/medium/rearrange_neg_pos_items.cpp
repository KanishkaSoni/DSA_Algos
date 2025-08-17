#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int> &a) {

    int n =a.size();
    vector<int> ans(n);
    int pos=0;
    int neg=1;
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            ans[pos] = a[i];
            pos +=2;
        }else{
            ans[neg] = a[i];
            neg +=2;
        }
    }
    return ans;
}


int main(){

    vector<int> a = {3,1,-2,-5,2,-4};

    vector<int> ans = rearrangeArray(a);

	cout <<"\n";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout <<"\n";
	return 0;
}