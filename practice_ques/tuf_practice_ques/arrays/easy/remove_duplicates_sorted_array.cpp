#include<bits/stdc++.h>
using namespace std;

int remove_duplicates(vector<int> &a) {
	int n = a.size();
	int i=1;
	int j=1;
	while(i<n){
		if(a[i] != a[i-1]){
			a[j] = a[i];
			j++;
		}
		i++;
	}
	return j;
}


int main(){

    vector<int> a = {0,0,1,1,1,2,2,3,3,4};

    int unique_elements = remove_duplicates(a);
    
    cout <<"\n";
    cout <<unique_elements;
    cout <<"\n";

	cout <<"\n";
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
    cout <<"\n";
}