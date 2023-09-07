#include<bits/stdc++.h>
using namespace std;

void occurences(int arr[],int n,int k){
    unordered_map<int, int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(auto it:mp)
        if(it.second>n/k)
            cout<<it.first<<" ";
}

int main(){

    int arr[]={30,10,20,20,10,20,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    cout<<"the elements with occurences more than n/k are:";
    occurences(arr,n,k);
}