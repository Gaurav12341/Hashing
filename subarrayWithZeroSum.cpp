#include<bits/stdc++.h>
using namespace std;

bool isSub(int arr[],int n){
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(s.find(presum)!=s.end())
            return true;
        else if(presum==0)
            return true;
        s.insert(presum);
    }
    return false;
}

int main(){
    int arr[]={-3,4,-3,-1,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"There is a subarray(Contiguous elements in an array) with sum as 0: "<<isSub(arr,n);
}