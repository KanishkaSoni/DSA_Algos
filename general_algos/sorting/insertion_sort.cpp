#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int* a, int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            if(a[j] < a[j-1]){
                int tmp =a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }else{
                // cout<<j<<"\n";
                break;
            }
        }
    }
}


int main(){
    int n = 5;

        int a[n] = {32, 42, 56, 64, 9};

        insertion_sort(a, n);
        
        cout <<"\n";
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout <<"\n";
}