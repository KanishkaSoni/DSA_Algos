#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int> &a) {
    int i=0;
        int j=0;
        int n=a.size();
        while(i<n){
            while(i<n && a[i]!=0){
                i++;
            }
            if(i<n){
                swap(a[i], a[j]);
                i++;
                j++;
            }
        }

        i=j;
        while(i<n){
            while(i<n && a[i]!=1){
                i++;
            }
            if(i<n){
                swap(a[i], a[j]);
                i++;
                j++;
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