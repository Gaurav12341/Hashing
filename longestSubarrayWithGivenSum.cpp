#include<bits/stdc++.h>
using namespace std;

int naiveLongest(int arr[],int n,int sum){
    int longest=0;
    for(int i=0;i<n;i++){
        int currSum=0;
        for (int j = i; j < n; j++)
        {
            currSum+=arr[j];
            if(currSum==sum){
                longest=max(longest,j-i+1);
            }
        }
        
    }
    return longest;
}
// TC O(n^2)

int longest(int arr[],int n,int sum){
    unordered_map<int,int>mp;
    int presum=0;
    int longest=0;
    for(int i=0;i<n;i++){
        presum+=arr[i];
        if(presum==sum)
            longest=i+1;
        if(mp.find(presum)==mp.end())
            mp.insert({presum,i});

        if(mp.find(presum-sum)!= mp.end()){
            longest=max(longest,i-mp[presum-sum]);
        }

    }
    return longest;
}

int main(){
    int arr[]={5,8,-4,-4,9,-2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    cout<<"The size of longest subarray with given sum is: "<<longest(arr,n,sum);
}