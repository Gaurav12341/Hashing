#include<bits/stdc++.h>
using namespace std;

void frequency(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" , "<<it->second<<endl;
    }
}

int main(){
    int arr[]={10,12,10,15,10,20,12,12};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"The frequency of elements in arr are: "<<endl;
    frequency(arr,n);
}