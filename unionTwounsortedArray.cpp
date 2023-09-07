#include<bits/stdc++.h>
using namespace std;

int distinct(int a[],int n1, int b[],int n2){
    unordered_set<int> s(a,a+n1);
    for(int i=0;i<n2;i++)
        s.insert(b[i]);
    return s.size();
}

int main(){
    int a[]={15,20,5,15};
    int n1=sizeof(a)/sizeof(a[0]);

    int b[]={15,15,15,20,10};
    int n2=sizeof(b)/sizeof(b[0]);

    cout<<"The number of distinct elements in the union of these array are: "<<distinct(a,n1,b,n2);
}