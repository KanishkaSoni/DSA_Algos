#include<bits/stdc++.h>
using namespace std;

bool check( vector<int> &a) {
    int n = a.size();
	int i = 1;

    while(i<n && a[i] >= a[i-1]){
        i++;
    }
    if(i==n){
        return true;
    }

    i++;
    while(i<n){
        if(a[i] < a[i-1]){
            return false;
        }
        i++;
    }
    if(a[n-1] > a[0]){
        return false;
    }
    else{
        return true;
    }
}


int main(){

    vector<int> a = {3,4,5,1,2};

    int sort_status = check(a);
    
    cout <<"\n";
    cout <<"Array is Sorted status: " << sort_status;
    cout <<"\n";
}