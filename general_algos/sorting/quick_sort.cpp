#include<bits/stdc++.h>
using namespace std;



int partition(int* a, int l, int h){
    int piv = a[l];
    int i = l;
    int j = h;
    while(i<j){
        while(i<=h && a[i] <= piv){
            i++;
        }
        while(j>=l && a[j] > piv){
            j--;
        }
        if(i<j){
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j;
}


void quick_sort(int* a, int l, int h){
    if(l<h){
        int p = partition(a, l, h);
        quick_sort(a, l, p-1);
        quick_sort(a, p+1, h);
    }
}


int main(){
    int n = 6;

    int a[n] = {32, 56, 56, 42, 42, 9};

    quick_sort(a, 0, n-1);
    
    cout <<"\n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
}