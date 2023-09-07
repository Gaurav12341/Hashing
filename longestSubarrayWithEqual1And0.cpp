#include<bits/stdc++.h>
using namespace std;

int equal(int arr[],int n){
    int presum=0, longest=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum*2==i+1)
            longest=max(longest,i+1);
    }
    return longest;
}

int main(){
    int arr[]={1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the longest subarray with equal 1's and 0's are: "<<equal(arr,n);
}