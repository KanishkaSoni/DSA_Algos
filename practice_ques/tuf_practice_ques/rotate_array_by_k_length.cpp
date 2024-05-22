#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> &a, int k) {
    int n=a.size();
    k = k%n;
	reverse(a.begin(), a.begin()+n-k);
    reverse(a.begin()+n-k, a.end() );
    reverse(a.begin(), a.end());
}


int main(){

    vector<int> a = {1,2,3,4,5,6,7};
	int k= 3;

    rotate(a, k);

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
	return 0;
}