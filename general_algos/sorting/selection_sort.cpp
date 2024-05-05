#include<bits/stdc++.h>
using namespace std;

void selection_sort(int* a, int n){


    for(int i=0;i<n-1;i++){
        int mn = a[i];
        int indx = i;
        for(int j=i;j<n;j++){
            if(a[j] < mn){
                mn=a[j];
                indx=j;
            }
        }
        if(indx != i){
            a[indx] = a[i];
            a[i] = mn;
        }
    }
}


int main(){
    int n = 5;

        int a[n] = {32, 56, 42, 42, 9};

        selection_sort(a, n);
        
        cout <<"\n";
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout <<"\n";
}