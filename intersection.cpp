#include<bits/stdc++.h>
using namespace std;

void intersection (int arr1[],int n1, int arr2[], int n2){
    unordered_map<int,int> mp2;
    for(int i=0;i<n2;i++)
        mp2[arr2[i]]++;
    
    for(int i=0;i<n1;i++)
        if(mp2.count(arr1[i])){
            cout<<arr1[i]<<endl;
        }
}

void betterintersection(int arr1[],int n1, int arr2[],int n2){
    unordered_set<int> s(arr2,arr2+n2);
    for(int i=0;i<n1;i++)
        if(s.count(arr1[i]))
            cout<<arr1[i]<<endl;
}

int main(){
    int arr1[]={10,15,20,25,30,50};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={30,5,15,80};
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    cout<<"the intersection in the order they come in first array are: "<<endl;
    betterintersection(arr1,n1,arr2,n2);
}