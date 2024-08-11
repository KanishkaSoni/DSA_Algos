#include<bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &a) {
    int n = a.size();
    int indx=-1;
    for(int i=n-2; i>=0;i--){
        if(a[i] < a[i+1]){
            indx = i;
            break;
        }
    }
    if(indx == -1){
        reverse(a.begin(), a.end());
        return;
    }

    for(int i=n-1;i>indx; i--){
        if(a[i] > a[indx]){
            swap(a[i], a[indx]);
            break;
        }
    }
    reverse(a.begin()+indx+1,a.end());
}


int main(){

    vector<int> a = {1,1,5};

    nextPermutation(a);

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
	return 0;
}