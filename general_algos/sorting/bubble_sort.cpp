#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int* a, int n){

    for(int i=0; i<n-1;i++){
        for(int j=0; j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
}

void optimised_bubble_sort(int* a, int n){

    for(int i=0; i<n-1;i++){
        int flag=1;
        for(int j=0; j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                flag=0;
            }
        }
        if(flag==1){
            // cout<<i;
            return;
        }
    }
}

int main(){

    int n = 5;

    int a[n] = {32, 56, 42, 42, 9};

    optimised_bubble_sort(a, n);
    //bubble_sort(a, n);
    cout <<"\n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
}
