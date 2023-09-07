#include<bits/stdc++.h>
using namespace std;

int naiveLongest(int a[],int b[],int n){        //checking all subarrays
    int longest=0;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){
            sum1+=a[j];
            sum2+=b[j];
            if(sum1==sum2){
                longest=max(longest,j-i+1);
            }
        }
    }
    return longest;
}

int longest(int a[],int b[],int n){

}

int main(){
    int a[]={0,1,0,1,1,1,1};
    int b[]={1,1,1,1,1,0,1};
    int n=sizeof(a)/sizeof(a[0]);

    cout<<"The longest subarray in the given arrays with same size with same sum is: "<<naiveLongest(a,b,n);
}