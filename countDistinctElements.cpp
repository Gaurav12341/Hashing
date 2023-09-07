#include<bits/stdc++.h>
using namespace std;

int distinct(int arr[],int n){
    unordered_set<int> s;           // as set ignores duplicate values
    unordered_set<int> s1 (arr,arr+n);  //directly allocating values to the set
    for(int i=0;i<n;i++)
        s.insert(arr[i]);
    return s.size();
}

int main(){
    int arr[]={15,12,13,12,13,13,18,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The number of distinct elements in the array are: "<<distinct(arr,n);
}

//TC O(n)  SC O(n)