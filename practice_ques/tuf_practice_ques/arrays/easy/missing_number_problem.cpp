#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &a) {
    int n = a.size();
        int s = 0;
        int ps = (n*(n+1))/2;
        for(int i=0;i<n;i++){
            s += a[i];
        }
        return ps-s;
}


int main(){

    vector<int> a = {9,6,4,2,3,5,7,0,1};

    int missing = missingNumber(a);

	cout <<"\n";
    cout <<"missing element - " << missing <<"\n";
	return 0;
}