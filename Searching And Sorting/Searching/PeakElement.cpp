#include<bits/stdc++.h>
using namespace std;
void peakElement(int arr[],int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1])
        s=mid+1;
        else 
        e=mid;
        mid=s+(e-s)/2;
    }
    cout<<s<<endl;
}
int main(){
    int ar[4]={0,10,5,2};
    peakElement(ar,4);
}