#include<bits/stdc++.h>
using namespace std;

bool isSub(int arr[],int n,int sum){
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(s.find(presum-sum)!=s.end())
            return true;
        else if(presum==sum)
            return true;
        s.insert(presum);
    }
    return false;
}

int main(){
    int arr[]={5,3,2,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=4;

    cout<<"There is a subarray(Contiguous elements in an array) with sum as 0: "<<isSub(arr,n,sum);
}