#include<bits/stdc++.h>
using namespace std;



void merge(int* a, int l, int m, int h){
    int tmp[h-l+1];
    int f = l;
    int s = m+1;
    int i=0;
    while(f<=m && s<=h){
        if(a[f]<=a[s]){
            tmp[i] = a[f++];
        } else{
            tmp[i] = a[s++];
        }
        i++;
    }
    while(f<=m){
        tmp[i++] = a[f++];
    }
    while(s<=h){
        tmp[i++] = a[s++];
    }
    for(int i=l; i<=h; i++){
        a[i] = tmp[i-l];
    }
}


void merge_sort(int* a, int l, int h){
    if(l==h){
        return;
    }
    int m = (l+h)/2;
    merge_sort(a, l, m);
    merge_sort(a, m+1,h);
    merge(a, l, m, h);

}


int main(){
    int n = 6;

    int a[n] = {32, 56, 56, 42, 42, 9};

    merge_sort(a, 0, n-1);
    
    cout <<"\n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
}