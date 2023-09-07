#include<bits/stdc++.h>
using namespace std;

int naivelongest(int arr[],int n){
    sort(arr,arr+n);
    int curr=1,longest=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1)
            curr++;
        else{
            longest=max(longest,curr);
            curr=1;
        }
    }
    return max(longest,curr);
}       //TC O(n^2)

int longest(int arr[],int n){
    unordered_set<int> s;
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
        int res=1;
    for(auto it=s.begin();it!=s.end();it++){
        int curr=1;
        if(s.find(*it-1)==s.end()){
            while(s.find(*it+1)!=s.end()){
                curr++;
                res=max(res,curr);
                it++;
            }
        }
    }
    return res;
}


int main(){
    int arr[]={2,9,4,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"The length of longest consecutive subsequence is: "<<longest(arr,n);
}