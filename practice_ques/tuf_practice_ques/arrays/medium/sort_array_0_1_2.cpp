#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &a) {

    //DNF Algorithm
    int n = a.size();
    int l=0;
    int m=0;
    int h=n-1;

    while(m<=h){
        if(a[m] == 0){
            swap(a[m], a[l]);
            m++;
            l++;
        }
        else if(a[m]==1){
            m++;
        }else{
            swap(a[m], a[h]);
            h--;
        }
    }
}


int main(){

    vector<int> a = {2,0,2,1,1,0};

    sortColors(a);

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
	return 0;
}