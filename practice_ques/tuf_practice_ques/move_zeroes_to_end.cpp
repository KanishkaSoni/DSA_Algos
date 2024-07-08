#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int> &a) {
    int f = 0;
    int s = 0;
    int n = a.size();
    while(s < n){
        while(s<n && a[s] == 0){
            s++;
        }
        if(s<n){
            swap(a[s], a[f]);//this swap will be redundant, if s and f are equal
            f++;
            s++;
        }

    }
}


int main(){

    vector<int> a = {1,2,0,3};

    moveZeroes(a);

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
	return 0;
}