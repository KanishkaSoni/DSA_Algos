#include<bits/stdc++.h>
using namespace std;
int searchInSorted(vector<int> &a, int k) {
    int n = a.size();
    int l=0;
       int h=n-1;
       while(l<=h){
           int m=(l+h)/2;
           if(a[m]<k){
               l=m+1;
           }else if(a[m] > k){
               h=m-1;
           }else{
               return 1;
           }
       }
       return -1;
}


int main(){

    vector<int> a = {1,2,3,4,6};
    int k =6;

    int status = searchInSorted(a, k);

	cout <<"\n";
    cout <<"element " <<k <<" present status - " << status <<"\n";
	return 0;
}