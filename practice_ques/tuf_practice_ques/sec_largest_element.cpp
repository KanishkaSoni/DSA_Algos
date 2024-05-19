#include<bits/stdc++.h>
using namespace std;

int print2largest(int a[], int n) {
	    int mx = INT_MIN;
	    int pmx = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(a[i] > mx){
	            pmx = mx;
	            mx = a[i];
	        }
	        else if(a[i] < mx && a[i] > pmx){
	            pmx = a[i];
	        }
	    }
	    if(pmx == INT_MIN){
	        return -1;
	    }
	    return pmx;
	}


int main(){
    int n = 6;

    int a[n] = {32, 56, 56, 42, 42, 9};

    int sec_largest = print2largest(a, n);
    
    cout <<"\n";
    cout <<sec_largest;
    cout <<"\n";
}