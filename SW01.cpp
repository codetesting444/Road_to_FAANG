#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,1,2,3,4,5,6,7};
    int mx = INT_MIN;
    int n = arr.size();
    int i=0,j=0,k=3;
    int sum = 0;
    while(j < n){

      sum = sum + arr[j];

        if(j-i+1 < k){
            j++;
        }else if(j-i+1 == k){
            mx = max(sum,mx);
            sum = sum - arr[i];
            i++;
            j++;
        }
        cout<<mx;
    }

}