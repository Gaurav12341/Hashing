#include<bits/stdc++.h>
using namespace std;

void naivecount(int arr[],int n, int k){
    for(int i=0;i<=n-k;i++){                //start of window
        int count=0;
        for (int j = 0; j < k; j++)            //iterate in window
        {
            bool flag=false;
            for(int p=0;p<j;p++){               //check with all the previous element till i+j
                if(arr[i+j]==arr[i+p]){
                    flag=true;
                    break;
                }
            }
            if(flag==false)
                count++;
        }
        cout<<count<<" ";
    }
}

void count(int arr[],int n, int k){
    unordered_map<int,int> mp;
    for(int i=0;i<k;i++)            //gives the freq of every element in 1st window
        mp[arr[i]]++;                   
    cout<<mp.size()<<" ";       //as the duplicates are ignored the size will be the distinct values
    for(int i=k;i<n;i++){           //iterating for next windows 
        mp[arr[i-k]]--;               //deleting the 1st element of previous window
        if(mp[arr[i-k]]==0)
            mp.erase(arr[i-1]);
        mp[arr[i]]++;                   //adding the one new element from the new window
        cout<<mp.size()<<" ";
    }
}

int main(){
    int arr[]={10,20,20,10,30,40,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4; // window size

    cout<<"The number of different elements in the window of array are: ";
    count(arr,n,k);
}